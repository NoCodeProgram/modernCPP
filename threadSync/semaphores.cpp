#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>

std::mutex mtx;
std::condition_variable cv;

bool ready = false;

void waitandDo()
{
	//here unique_lock is better? why?std::lock_guard<std::mutex> lck(mtx);
	//if we frequently calls, it unique_lock is better?
	//why lock guard is not working??
	std::unique_lock<std::mutex> lck(mtx);
	//very imporant to check ready (lostwakdup/sprious wakeup)
	//it checks ready and lock later. (to prevent lost wake up)
	//lost wake up : when signal sent before condition lock
	//sprious wake up?
	cv.wait(lck, []{ return ready; });
	std::cout << "work" << std::endl;
}


void sender()
{
	{ //very important to lock 
		std::lock_guard<std::mutex> lck(mtx);
		ready = true;
	}
	cv.notify_one();
}

int main()
{

    std::thread t1(waitandDo);
	std::thread t2(sender);
	
	//join is must
	t1.join();
	t2.join();

	std::cout << "main thread finish" << std::endl;

}

//producer/consumer, 
//sync via messages
//wait/wait_for/wiat_until...cv.notify_all()


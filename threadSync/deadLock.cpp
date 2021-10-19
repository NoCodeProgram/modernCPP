#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex mtx0;
std::mutex mtx1;

//mutex never 

void plus1(int& num)
{

	mtx.lock();  //mutex is never released
	if(num ==0)		//or exception is thrown
	{
		return ;
	}
	num = num+1;
	std::this_thread::sleep_for (std::chrono::seconds(3));
	mtx.unlock();

}

int main()
{
	int num = 0;

	std::thread t0(plus1,std::ref(num));
	std::thread t1(plus1,std::ref(num));

	//join is must
	t0.join();
	t1.join();


	
	std::cout << "num: " << num << std::endl;

}
//show dead lock situation (with normal lock, and with lock_guard)

//if the order is always same, it never confront deadlock

//but alwyas?

//prefer scoped lock (C++17)

//next after this, explains about unique_lock, shared_lock
//bit expensive, but when??
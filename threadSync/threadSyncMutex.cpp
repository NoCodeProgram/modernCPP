#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex mtx;

void plus1(int& num)
{
	for(int i=0 ; i<10000 ; i++)
	{	
		mtx.lock();  //also we have try lock. but what for??
		num = num+1;
		mtx.unlock();
	}	
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
//race condition, data race,
//here num is shared between two threads


//critical region
//resource
//minimize mutex regions

//mutex,recursive_mutex,timed_mutex,recursive_timed_mutex
//std::shared_timed_mutex , shared_mutex
//by cppreference

//lock guard followed by exception thrown
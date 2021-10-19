#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>

std::mutex mtx;

//mutex never 

void plus1(int& num)
{

	std::lock_guard<std::mutex> lockGuard(mtx);
	mtx.lock();  //mutex is never released
	if(num ==0)		//or exception is thrown
	{
		return ;	//function path is different
	}
	num = num+1;
	// mtx.unlock();

	//from C++17 prefer scoped lock, later explain it with deadlock

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
#include <iostream>
#include <thread>



void fn()
{
	static int globalNum = 0;
	thread_local int tlNum = 0;

	int fnNum = 2;

	std::cout << "globalNum:" << globalNum <<std::endl;
	std::cout << "thLocalNum:" << tlNum << std::endl;

	globalNum++;
	tlNum++;
}

int main()
{
	using namespace std::chrono_literals;

	int mainNum = 1;
	std::thread t1(fn);
	std::this_thread::sleep_for(1s);
	std::thread t2(fn);

	t1.join();
	t2.join();
}
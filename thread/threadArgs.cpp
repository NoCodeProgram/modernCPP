#include <iostream>
#include <thread>

int fn()
{
	throw std::runtime_error("error");
}

int main()
{
	try
	{
		std::thread t1(fn);
		t1.join();
	}
	catch(...)
	{
		std::cout << "catched" << std::endl;
	}

}

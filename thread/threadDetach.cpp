#include <iostream>
#include <chrono>
#include <thread>

void function()
{
	std::cout << "functionThread:"<<  std::endl;
	while(1)
	{
		std::this_thread::sleep_for (std::chrono::seconds(2));
		std::cout << "functionThread finish"<<  std::endl;
	}
}

int main()
{
	std::cout << "main thread start" << std::endl;


	std::thread t1(function);
	std::cout << "main thread:" << std::endl;
	

	

	// t1.detach(); //throw std::terminate
	t1.join();

	std::cout << "main thread finish" << std::endl;

}
//order changes
//the definition of joinable thread., https://en.cppreference.com/w/cpp/thread/thread/joinable
//thread must be joined or detached.
//detach -> stay forever?
//detach.. wait for a long time

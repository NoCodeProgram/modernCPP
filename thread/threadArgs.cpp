#include <iostream>
#include <chrono>
#include <thread>


//argument
void function(int a, int &b)
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
	

	

	t1.join();

	std::cout << "main thread finish" << std::endl;

}

//memory map should be explained too.

//we can pass one arg
//we can pass multiple args

//think about life time of the args(reference).
// to explain life time of the arg object, consider string




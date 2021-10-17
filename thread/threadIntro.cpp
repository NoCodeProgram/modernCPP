#include <iostream>
#include <thread>

void function()
{
	std::cout << "thread" << std::endl;
}

int main()
{
	std::cout << "main thread start" << std::endl;

    std::thread t2([]{
		std::cout << "lambda thread" << std::endl;
	});
	std::thread t1(function);
	std::cout << "main thread" << std::endl;
	

	

	t1.join();
	t2.join();

	std::cout << "main thread finish" << std::endl;

}
//order changes
//TODO: may add thread number for each function
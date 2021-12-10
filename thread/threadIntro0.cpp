#include <iostream>
#include <thread>

void fn()
{
	int a=0;
	std::cout << "fn" << std::endl;
}

int main()
{
	std::cout << "process start" << std::endl;
	
	std::thread t1(fn);
	std::thread t2(fn);
	std::thread t3([]{
		int a = 0;
		std::cout << "lambda thread" << std::endl;
	});

	t1.join();
	t2.join();
	t3.join();

	std::cout << "process end" << std::endl;

}
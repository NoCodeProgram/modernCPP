#include <iostream>
#include <thread>

void fn(std::stop_token stoken)
{
	for(int i=0 ; ; i++)
	{
		using namespace std::chrono_literals;
		std::this_thread::sleep_for(1s);
		std::cout << i << std::endl;
		if(stoken.stop_requested())
		{
			std::cout << "stop requested" <<std::endl;
			return;
		}
	}
}

int main()
{
	std::jthread t1(fn);
}
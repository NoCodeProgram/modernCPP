#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> ptr = std::make_unique<int>(3);

	std::unique_ptr<int> ptr1 = std::move(ptr);

	if(ptr1==nullptr)
	{
		std::cout << "abc" << std::endl;
	}

	return 0;
}
#include <iostream>
#include <stack>

int main(int argc, char const *argv[])
{
	std::stack<int> nums;

	nums.emplace(1);
	nums.emplace(3);
	nums.emplace(5);

	std::cout << nums.top() << std::endl;
	nums.pop();
	std::cout << nums.top() << std::endl;
	nums.pop();
	std::cout << nums.top() << std::endl;
	nums.pop();

	std::cout << "size: " << nums.size() << std::endl;
	
	return 0;
}
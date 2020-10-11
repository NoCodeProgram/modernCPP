#include <iostream>
#include <stack>
#include <queue>

int main(int argc, char const *argv[])
{
	std::queue<int> nums;

	nums.emplace(1);
	nums.emplace(3);
	nums.emplace(5);

	std::cout << nums.front()<< " , " << nums.back() << std::endl;
	nums.pop();
	std::cout << nums.front()<< " , " << nums.back() << std::endl;
	nums.pop();
	std::cout << nums.front()<< " , " << nums.back() << std::endl;
	nums.pop();

	std::cout << "size: " << nums.size() << std::endl;
	
	return 0;
}
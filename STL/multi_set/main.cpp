#include <iostream>
#include <set>


int main(int argc, char const *argv[])
{
	std::multiset<int> nums{1,2,3,3,3,4,5};

	for(const auto & num : nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;


	
	return 0;
}
#include <algorithm>
#include <iostream>
#include <forward_list>

int main(int argc, char const *argv[])
{
	/* code */

	std::forward_list<int> nums{1,2,3,4,5};


	nums.emplace_front(0);



	for(auto num : nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	return 0;
}
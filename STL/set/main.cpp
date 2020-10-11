#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{

	std::set<int> nums{1,2,3,4,5};

	nums.emplace(-1);

	nums.emplace(100);
	nums.emplace(-500);
	nums.emplace(4000);

	nums.emplace(3);

	nums.emplace(6);

	for(const int num : nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;


	
	return 0;
}
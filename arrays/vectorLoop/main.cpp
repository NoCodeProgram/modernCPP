#include <chrono>
#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	std::vector<int> nums{0,1,0,1};

	// for(std::size_t idx=0 ; idx< nums.size() ; idx++)
	// {
	// 	if(nums[idx]==0)
	// 	{
	// 		nums.emplace_back(2);
	// 	}
	// }

	//iterator based
	// for(auto itr = nums.begin() ; itr != nums.end() ; itr++)
	// {
	// 	if( (*itr) == 0)
	// 	{
	// 		nums.emplace_back(2);
	// 	}
	// }


	//range based loop
	for(auto & num : nums)
	{
		if(num == 0)
		{
			nums.emplace_back(2);
		}	
		// const auto n = std::distance(nums.begin(),&num);
		std::cout << n;
	}


	for(const int n:nums)
	{
		std::cout << n << " ";
	}
	std::cout << std::endl;


}
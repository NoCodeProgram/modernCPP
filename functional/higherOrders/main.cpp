#include <algorithm>
#include <iostream>
#include <vector>

int main()
{

	std::vector<int> nums{1,2,3,4,5,6,7,8,9,10};

	// nums.erase(std::remove_if(nums.begin(),nums.end(),[](int n)
	// {
	// 	return n%2 == 1;
	// }),nums.end());
	


	for(int num: nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	
	return 0;
}



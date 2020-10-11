#include <chrono>
#include <iostream>
#include <vector>

int main()
{
	std::size_t n;
	std::cin >> n;

	std::vector<int> nums(n,1);

	auto start = std::chrono::high_resolution_clock::now();
	//Range based Loop or iterator base loop
	for(int i=0 ; i<1000 ; i++){
	for(auto itr = nums.begin() ; itr < nums.end() ; itr++)
	{
		(*itr) *=2;
	}
	}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end-start;
    std::cout << "Time to fill and iterate a: " << diff.count() << " s\n";

     start = std::chrono::high_resolution_clock::now();
	for(int i=0 ; i<1000 ; i++){
	for(int & num: nums)
	{
		num*=2;
	}
	}
	end = std::chrono::high_resolution_clock::now();
	diff = end-start;
    std::cout << "Time to fill and iterate a: " << diff.count() << " s\n";
	// 0 1 0 1 1 1 
         start = std::chrono::high_resolution_clock::now();
	for(int i=0 ; i<1000 ; i++){    
	for(std::size_t idx = 0 ; idx<nums.size() ; idx++)
	{
		nums[idx]*=2;
	}
	}
end = std::chrono::high_resolution_clock::now();
	diff = end-start;
    std::cout << "Time to fill and iterate a: " << diff.count() << " s\n";




	return 0;
}
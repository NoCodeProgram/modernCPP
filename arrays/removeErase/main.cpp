#include <algorithm>
#include <vector>
#include <iostream>
#include <chrono>

int main()
{
	std::size_t n;
	std::cin >> n;

	// std::vector<int> nums{1,2,1,2,1,2,1,2};
	// std::remove(nums.begin(), nums.end(), 1);

	// std::cout << nums.size() << std::endl;

	// for(const int num : nums)
	// {
	// 	std::cout << num << std::endl;
	// }



 	std::vector<int> numsA(n,9.0);
 	std::vector<int> numsB(n,9.0);
 	auto start = std::chrono::high_resolution_clock::now();
 	for(int i=0 ; i<10 ; i++){
 	for(auto & num:numsA)
 	{
 		num/=2;
 	}}
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double> diff = end-start;
    std::cout << "Time to fill and iterate a: " << diff.count() << " s\n";
 	
    start = std::chrono::high_resolution_clock::now();
    for(int i=0 ; i<10 ; i++){
    for(int i=0 ; i<numsB.size() ; i++)
 	{
 		numsB[i]/=2;
 	}}
	end = std::chrono::high_resolution_clock::now();
	diff = end-start;
    std::cout << "Time to fill and iterate a: " << diff.count() << " s\n";

}
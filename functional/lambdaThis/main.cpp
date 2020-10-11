#include <algorithm>
#include <iostream>
#include <vector>

int main()
{

	std::vector<int> nums{1,2,3,4,5,6,7,8,9,10};

	auto lambdaAdd10 = [](int &n)
	{
		n += 10;
	};

	std::for_each(nums.begin(),nums.end(), lambdaAdd10);

	for(int num: nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	
	return 0;
}


















// class Cat
// {
// public:
// 	explicit Cat(int age): mAge{age} {}
// 	void speak() const
// 	{
// 		std::cout << "meow" << std::endl;
// 	}
// 	void test() const
// 	{
// 		auto lambda = [this]()
// 		{
// 			std::cout << "lambdaFunction" << std::endl;
// 			std::cout << this->mAge << std::endl;
// 			this->speak();
// 		};
// 		lambda();
// 	}

// private:
// 	int mAge;
// };
#include <algorithm>
#include <string>
#include <vector>
#include <iostream>

class Cat
{
public:
	Cat(std::string name,int age):mName{std::move(name)},mAge(age) {}
	void speak() const
	{
		std::cout << "meow" << mName << " " << mAge << std::endl;
	}
	int age() const
	{
		return mAge;
	}
private:
	std::string mName;
	int mAge;
};


int main()
{
	std::vector<Cat> cats;
	cats.reserve(4);

	cats.emplace_back("cat1",1);
	cats.emplace_back("cat2",2);
	cats.emplace_back("cat3",3);
	cats.emplace_back("cat4",4);

	cats.erase(std::remove_if(cats.begin(), cats.end(),[](const Cat & cat){
		if(cat.age()%2==0)
		{
			return true;
		}
		return false;
	}),cats.end());

	for(const Cat & cat : cats)
	{
		cat.speak();
	}





	// std::vector<int> nums{0,1,2,3,4,5,6};
	// nums.erase(std::remove_if(nums.begin(),nums.end(),[](int n){
	// 	if(n%2==0)
	// 	{
	// 		return true;
	// 	}
	// 	return false;
	// }),nums.end());
	// for(int num:nums)
	// {
	// 	std::cout << num << " ";
	// }
	// std::cout << std::endl;

}

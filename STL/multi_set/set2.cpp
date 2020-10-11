#include <iostream>
#include <set>


struct customFn {
    bool operator()(const int lhs, const int rhs) const
    {
        return (lhs % 10) < (rhs % 10);
    }
};

class Cat
{
public:
	Cat(int age, std::string name):mAge{age},mName{std::move(name)}{}
	void speak() const
	{
		std::cout << mAge << mName << std::endl;
	}

	int age() const
	{
		return mAge;
	}

	const std::string & name() const
	{
		return mName;
	}

private:
	std::string mName;
	int mAge;
};

bool operator<(const Cat& lhs, const Cat& rhs)
{
	return lhs.age() < rhs.age();
}

 
int main()
{
    std::set<int, customFn> nums{1, 2, 3, 4, 5};

    nums.emplace(11);
    nums.emplace(21);
 
	for(const int num : nums)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

	std::set<Cat> cats;

	cats.emplace(2,"kitty");
	cats.emplace(1,"nabi");
	cats.emplace(1,"nocope");
	for(const auto & cat : cats)
	{
		cat.speak();
	}
	std::cout << std::endl;


	std::multiset<int> mtSet{1,2,3,3,3,3,4,5};
	for(const int num : mtSet)
	{
		std::cout << num << " ";
	}
	std::cout << std::endl;

}
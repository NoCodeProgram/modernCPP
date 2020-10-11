#include <iostream>
#include <vector>

class Cat
{
public:
	explicit Cat (int age): mAge{age}{}
	void speak() const
	{
		std::cout << "meow~" << mAge << std::endl;
	}
private:
	int mAge;
};

int main()
{

	std::vector<Cat> cats;
	cats.emplace_back(Cat(1));
	cats.emplace_back(Cat(2));
	cats.emplace_back(Cat(3));
	cats.emplace_back(Cat(4));

	for(const auto & cat : cats)
	{
		cat.speak();
	}

}
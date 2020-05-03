#include <iostream>
#include <string>

class Cat
{
public:
	Cat(std::string name,int age): mName{std::move(name)},mAge{age} {};
	const std::string& name() const
	{
		return mName;
	};
	int age() const
	{
		return mAge;
	};
	// void print(std::ostream& os) const
	// {
	// 	os << mName << " " << mAge << std::endl;
	// };

private:
	std::string mName;
	int mAge;
};

std::ostream& operator<<(std::ostream& os, const Cat& c)
{
	return os<< c.name() <<" " << c.age();
};



int main()
{
	Cat kitty{"kitty",1};
	Cat nabi{"nabi", 2};

	std::cout << kitty << std::endl;
	std::cout << nabi << std::endl;
	// ==, < , <<

	// kitty.print(std::cout);
	// nabi.print(std::cout);
	return 0;

}
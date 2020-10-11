#include <iostream>
#include <vector>


class Cat
{
public:
	Cat(std::string name,int age):mName{std::move(name)},mAge{age} {}
	void speak() const
	{
		std::cout << "meow" << mName <<mAge << std::endl;
	}

private:
	std::string mName;
	int mAge;
};

int main()
{
	std::vector<Cat> cats;

	cats.emplace_back("cat0",0);
	cats.emplace_back("cat1",1);
	Cat& cat = cats.emplace_back("kitty",2);

	Cat nabi{"nabi",3};
	cats.emplace_back(nabi); //L value -> copy

	for(const auto& cat : cats)
	{
		cat.speak();
	}
	
	

	return 0;
}
#include <iostream>
#include <string>
class Cat
{
public:
	Cat()=default;
	Cat(std::string name,int age):mName{std::move(name)},mAge{age}
	{
		std::cout << mName << " constructor" << std::endl;
	};
	
	void print()
	{
		std::cout << mName << " " << mAge << std::endl;
	};
private:
	std::string mName;
	int mAge;
	// char * mPtr;
};

int main()
{
	Cat kitty{"kitty",1};
	Cat nabi{"nabi",2};

	kitty = nabi; //copy assignment
	kitty = std::move(nabi); //move

	return 0;
}
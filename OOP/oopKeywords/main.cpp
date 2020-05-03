#include <iostream>
#include <string>
class Cat
{
public:
	void age(int age)
	{
		mAge = age;
	}
	int age() const
	{
		return mAge;
	}
	void name(std::string name)
	{
		mName = std::move(name);
	}
	const std::string& name() const
	{
		return mName;
	}

private:
	int mAge;
	std::string mName;
	
};


int main()
{
	const Cat kitty{"kitty"};

	std::string name = kitty.name();  // deep copy
	const std::string & nameRef = kitty.name();  //no deep copy

	return 0;
}


#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class Cat
{
public:
	Cat(std::string name, int age) : mName{std::move(name)}, mAge{age} {};
	void print(std::ostream & os)
	{
		os << mName << "," << mAge << "\n";
	}

private:
	std::string mName;
	int mAge;
};

int main()
{
	Cat kitty{"kitty",3};
	Cat nabi{"nabi",2};

	std::stringstream ss;
	kitty.print(ss);
	nabi.print(ss);

	std::cout << ss.str() << std::flush;



	// {
	// 	std::ofstream ofs{"test.txt"};
	// 	if(!ofs)
	// 	{
	// 		std::cout << "cannot open the file" << std::endl;
	// 		return 0;
	// 	}

	// }


	return 0;
}
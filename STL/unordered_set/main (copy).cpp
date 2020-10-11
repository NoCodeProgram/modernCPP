#include <iostream>
#include <unordered_set>
#include <string>


int main(int argc, char const *argv[])
{

	std::unordered_set<std::string> names;

	names.emplace("abc");
	names.emplace("def");
	names.emplace("ghi");
	names.emplace("jkl");

	std::cout << "abc: " << names.bucket("abc")<< " hash:"<<std::hash<std::string>{}("abc") << std::endl;
	std::cout << "def: " << names.bucket("def")<< " hash:"<<std::hash<std::string>{}("def") << std::endl;
	std::cout << "ghi: " << names.bucket("ghi")<< " hash:"<<std::hash<std::string>{}("ghi") << std::endl;
	std::cout << "jkl: " << names.bucket("jkl")<< " hash:"<<std::hash<std::string>{}("jkl") << std::endl;

	for(const auto & name: names)
	{
		std::cout << name << std::endl;
	}




	std::cout << std::hash<std::string>{}("") << std::endl;
	std::cout << std::hash<std::string>{}("abc") << std::endl;
	std::cout << std::hash<std::string>{}("def") << std::endl;

	return 0;
}
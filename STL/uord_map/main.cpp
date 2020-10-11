#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	std::unordered_multimap<int,std::string> idNames;


	idNames.emplace(1,"nocope");
	idNames.emplace(2,"kitty");
	idNames.emplace(3,"nabi");

	idNames.emplace(1,"bingo");

	for(const auto& idname:idNames)
	{
		std::cout<< idname.first << " " << idname.second << std::endl;
	}


	return 0;
}
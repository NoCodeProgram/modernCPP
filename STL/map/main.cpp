#include <iostream>
#include <map>
#include <string>

int main(int argc, char const *argv[])
{

    std::map<std::string,int> nameList;

    nameList.emplace("nocope",1);
    nameList.emplace("kitty",2);
    nameList.emplace("nabi",3);
    nameList.emplace("bingo",4);
    nameList.emplace("meow",3);

    for(const auto & idPair : nameList)
    {
        std::cout << idPair.first << " "
         << idPair.second << std::endl;
    }


    
    return 0;
}
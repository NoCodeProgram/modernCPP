#include <iostream>
#include <string>
#include <unordered_set>

int main(int argc, char const *argv[])
{
	std::unordered_set<std::string> uordSet;
	uordSet.reserve(10000);

	uordSet.emplace("abc");	
	uordSet.emplace("def");
	uordSet.emplace("ghi");
	uordSet.emplace("jkl");

	std::cout << "bucket count: " << uordSet.bucket_count() << std::endl;

	uordSet.emplace("1abc");	
	uordSet.emplace("1def");
	uordSet.emplace("1ghi");
	uordSet.emplace("1jkl");
	uordSet.emplace("21abc");	
	uordSet.emplace("21def");
	uordSet.emplace("21ghi");
	uordSet.emplace("21jkl");
	uordSet.emplace("321abc");	
	uordSet.emplace("321def");
	uordSet.emplace("321ghi");
	uordSet.emplace("321jkl");
	std::cout << "bucket count: " << uordSet.bucket_count() << std::endl;


	std::cout << "abc:  " << std::hash<std::string>{}("abc")<< " bucket: "<<uordSet.bucket("abc") << std::endl;
	std::cout << "def:  " << std::hash<std::string>{}("def")<< " bucket: "<<uordSet.bucket("def") << std::endl;
	std::cout << "ghi:  " << std::hash<std::string>{}("ghi")<< " bucket: "<<uordSet.bucket("ghi") << std::endl;
	std::cout << "jkl:  " << std::hash<std::string>{}("jkl")<< " bucket: "<<uordSet.bucket("jkl") << std::endl;



	// for (const std::string & str : uordSet)
	// {
	// 	std::cout << str << std::endl;
	// }

	// uordSet.find("abc");  //O(1)
	// uordSet.erase("abc");  //O(1)

	return 0;
}
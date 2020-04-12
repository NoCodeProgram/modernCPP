#include <string>

// std::string getString()
// {
// 	std::string s = "nocodeprogram";
// 	return s; //RVO
// }

int main()
{
	// std::string a = getString();
	std::string s = "abc";
	std::string b = s;
	std::string c = std::move(s);
	return 0;
}
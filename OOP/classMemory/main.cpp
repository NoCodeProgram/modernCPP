#include <iostream>
class alignas(32) Cat 
{
public:
	void speak();
private:
	char c1;  //1 byte
	int i4a;  //4 bytes
	int i4b;  //4 bytes
	double d8;//8 bytes
};


int main()
{
	
	Cat stackCat;

	Cat cats[100];
	//prefer std::array


	std::cout << sizeof(stackCat) << std::endl;
	//16bytes
	return 0;
}
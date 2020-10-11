#include <array>
#include <vector>


int main()
{

	std::array<std::array<double,10>,10> mat;

	for(int rowIdx=0 ; rowIdx<10 ; rowIdx++)
	{
		for(int colIdx = 0 ; colIdx; 10 ; colIdx++)
		{
			mat[rowIdx][colIdx] +=1;
		}
	}

	//x100, x1000
	for(int colIdx = 0 ; colIdx; 10 ; colIdx++)
	{
		for(int rowIdx=0 ; rowIdx<10 ; rowIdx++)
		{
			mat[rowIdx][colIdx] +=1;
		}
	}

}
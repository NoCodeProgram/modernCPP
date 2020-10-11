#include <iostream>
#include <queue>


int main()
{
	std::priority_queue<int,std::vector<int>, std::greater<int>> q;
	q.emplace(1);
	q.emplace(3);
	q.emplace(5);
	q.emplace(7);
	q.emplace(9);

	std::cout << q.top() << std::endl;

	q.emplace(10); //O(lg n)

	std::cout << q.top() << std::endl;
	//O(1)

	q.pop();
	q.pop();
	q.pop();
	std::cout << q.top() << std::endl;




}
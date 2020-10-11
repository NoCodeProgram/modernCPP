#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
 
int main()
{
    std::cout << "Max heap:\n"; 
    std::vector<int> v {1,3,5,7,9,11 }; 
    std::cout << "initially, v: ";
    for (auto i : v)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
 
    std::make_heap(v.begin(), v.end());
    //O(n) <-
 
    std::cout << "after make_heap, v: ";
    for (auto i : v)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';
 
    std::pop_heap(v.begin(), v.end());
 
    std::cout << "after pop_heap, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';
 

    v.pop_back();
    std::cout << "after pop_back, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';

    v.emplace_back(10);
    std::cout << "after emplace 10, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';

    std::push_heap(v.begin(),v.end());
    std::cout << "after push_heap, v: ";
    for (auto i : v) std::cout << i << ' ';
    std::cout << '\n';


 
}
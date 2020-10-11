#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
 
struct Employee
{
    int age;
    std::string name;  // Does not participate in comparisons
};
 
bool operator<(const Employee & lhs, const Employee & rhs)
{
    return lhs.age < rhs.age;
}
 
int main()
{
    std::vector<Employee> v =
    { 
        {32, "A"},
        {108, "A"},        
        {108, "B"},
        {32, "B"},
        {32, "C"},
        {108, "C"},
        {32, "D"},
        {108, "D"},

    };  
    for (const Employee & e : v)
        std::cout << e.age << "," << e.name << "  ";
    std::cout << '\n';
 
    // std::stable_sort(v.begin(), v.end());
    // std::sort(v.begin(), v.end());
    std::nth_element(v.begin(), v.begin() + v.size()/2, v.end());
    // std::cout << "The median is " << v[v.size()/2].age << '\n';


   for (const Employee & e : v)
        std::cout << e.age << "," << e.name << "  ";
    std::cout << '\n';
    
}


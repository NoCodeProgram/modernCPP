#include <iostream>
#include <deque>
 
int main()
{
    // Create a deque containing integers
    std::deque<int> d = {7, 5, 16, 8};
 
    // Add an integer to the beginning and end of the deque
    d.emplace_front(13);
    d.emplace_back(25);
 
    // Iterate and print values of deque
    for(int n : d) {
        std::cout << n << '\n';
    }
}
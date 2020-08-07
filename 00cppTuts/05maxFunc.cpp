// C++ program to demonstrate the use of std::max
#include <iostream>
#include <algorithm>
using namespace std;

// Defining the binary function
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    int a = 3, b = 10, c = 5;

    // Finding the largest of all the numbers
    cout << max({a, b, c}, comp) << "\n";
    cout << max({1, 2, 3, 4, 5, 10, -1, 7}, comp) << "\n";

    return 0;
}

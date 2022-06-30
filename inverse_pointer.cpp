#include <iostream>
#include <vector>
std::vector<int> invertArray(std::vector<int> arr)
{
    for (int &a : arr)
        a = -a;
    return arr;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::vector<int> inverted = invertArray(arr);
    // Print the array as a string
    for (int a : inverted)
        std::cout << a << " ";
    std::cout << std::endl;
}
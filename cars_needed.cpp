#include <iostream>
using namespace std;

float carsNeeded(int n)
{
    return n / 5 + (n % 5 == 0 ? 0 : 1);
}

int main()
{
    cout << carsNeeded(6) << endl;
}

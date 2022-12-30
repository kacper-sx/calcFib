#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned int n)
{
    unsigned long long a = 0, b = 1;

    for (unsigned int i = 0; i < n; i++)
    {

        b = a + b;
        a = b - a;
    }

    return a;
}


int main()
{
    unsigned int number;
    cout << ("Enter the number of fibonacci sequence: ");
    cin >> number;
    cout << "The " << number << " fibonacci sequence number is: " << fibonacci(number) << ", fibCalc,  Kacper Saweczko 91051 gr 1.4" << endl;
    return 0;
}



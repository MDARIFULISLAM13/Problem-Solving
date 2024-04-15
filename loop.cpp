#include <iostream>
using namespace std;

int factorial(int n)
{
    // I know this, so I don't want my function to go any further...
    if (n == 0)
        return 1;
    // don't bother what to do, just reuse the function...
    else
        return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number to find its factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

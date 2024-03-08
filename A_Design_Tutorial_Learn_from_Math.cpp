#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 6 << " "
             << "6\n";
        return 0;
    }
    cout << n - 9 << " "
         << "9\n";
    return 0;
}
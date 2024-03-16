#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, k;
    cin >> n >> k;
    if ((n - 1) <= k)
    {
        cout << "1\n";
    }
    else
    {
        cout << n << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}
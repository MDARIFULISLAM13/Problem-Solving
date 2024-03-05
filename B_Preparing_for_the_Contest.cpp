#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, a;
    cin >> n >> a;
    for (int i = 1; i <= a; i++)
    {
        cout << i << " ";
    }
    for (int i = n; i > a; i--)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
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
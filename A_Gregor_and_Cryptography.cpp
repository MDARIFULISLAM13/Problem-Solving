#include <bits/stdc++.h>
using namespace std;
void arif()
{
    long long int n;
    cin >> n;
    int v1 = 0, v2 = n - 1, r = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 1)
        {

            cout << i << " " << v2 << "\n";
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}
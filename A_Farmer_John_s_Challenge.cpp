/**
 *
 * Author : Md.Ariful Islam
 * created: __TIMESTAMP__
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
void arif()
{
    int n, k;
    cin >> n >> k;
    if (k != 1 && n != k)
    {
        cout << "-1\n";
        return;
    }
    else if (n == k)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "1 ";
        }
        cout << endl;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}

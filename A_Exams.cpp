/**
 *
 * Author : Md.Ariful Islam
 *
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t;
    cin >> n >> t;
    if (n * 2 == t)
    {
        cout << n << endl;
        return 0;
    }
    if (n * 2 < t && n * 3 <= t)
    {
        cout << "0\n";
        return 0;
    }
    while (n * 2 != t)
    {
        t -= 3;
        n -= 1;
    }
    cout << n;
    return 0;
}

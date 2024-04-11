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
void arif()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll sum = 0;
    if (a * 2 <= b)
    {
        cout << n * a << endl;
        return;
    }
    if (n % 2 == 0)
    {
        cout << (n / 2) * b << endl;
        return;
    }
    else
    {
        cout << ((n / 2) * 2) + a << endl;
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

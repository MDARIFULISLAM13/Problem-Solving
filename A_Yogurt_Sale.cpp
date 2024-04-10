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
    if (a * 2 <= b)
    {
        cout << n * a << endl;
        return;
    }
    else if (n % 2 == 0)
    {
        cout << (n / 2) * b << endl;
        return;
    }
    else
    {
        ll sum = (n / 2) * b;
        sum += a;
        cout << sum << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}

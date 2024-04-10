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
    int s;
    cin >> s;
    ll sum = 0;
    while (s % 2 == 0)
    {
        s /= 10;
    }
    while (s > 0)
    {
        sum += (s % 10);
        s /= 10;
    }
    cout << sum;
    return 0;
}

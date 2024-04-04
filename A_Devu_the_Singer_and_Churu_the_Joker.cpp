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
    int s, d;
    cin >> s >> d;
    ll sum = 0;
    for (int i = 0; i < s; i++)
    {
        int v;
        cin >> v;
        sum += v;
    }
    if ((s - 1) * 10 >= d || ((s - 1) * 10) + sum > d)
    {
        cout << "-1\n";
        return 0;
    }
    cout << (d - sum) / 5;

    return 0;
}

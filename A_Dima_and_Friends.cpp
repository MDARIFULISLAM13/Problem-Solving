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
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        sum += v;
    }
    int count = 0;
    for (int i = 1; i <= 5; i++)
    {
        if ((sum + i - 1) % (n + 1) != 0)
        {
            ++count;
        }
    }
    cout << count;
    return 0;
}
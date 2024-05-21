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
    vector<pair<int, int>> a;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back({ v, i });
    }
    a.push_back({ a[0].first,1 });

    int mn = 1e18;
    int in = 100000000;
    for (int i = 1;i <= n;i++) {
        int diff = abs(a[i].first - a[i - 1].first);
        if (diff < mn) {
            mn = diff;
            in = i;
        }
    }
    cout << a[in].second << " " << a[in - 1].second;


}
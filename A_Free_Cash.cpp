/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-06-2024
 * time : 10:45:35
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
    cout.tie(NULL);

    int n;
    cin >> n;
    int ans = 0;
    vector<pair<int, int>>a;
    for (int i = 0;i < n;i++) {
        int v, vv;
        cin >> v >> vv;
        a.push_back({ v,vv });
    }
    sort(a.begin(), a.end());
    int mx = 1;
    int cr = 1;
    for (int i = 1;i < n;i++) {
        if (a[i].first == a[i - 1].first) {
            if (a[i].second == a[i - 1].second) {
                cr++;
            }
            else {
                cr = 1;
            }
        }
        else {
            cr = 1;
        }
        mx = max(mx, cr);
    }
    cout << mx;


    return 0;
}
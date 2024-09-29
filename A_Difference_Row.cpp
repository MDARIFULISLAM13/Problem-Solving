/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-09-2024
 * time : 12:25:28
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

    int t;
    cin >> t;
    vec a(t);
    for (int i = 0;i < t;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    swap(a[0], a[t - 1]);
    for (auto& u : a) {
        cout << u << " ";
    }
    return 0;
}
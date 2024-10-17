/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * time : 19:52:33
 * Problem Name : B_House_of_Remians
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

    ll t;
    cin >> t;
    vec a(t);
    for (int i = 0;i < t;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll ans = 0, pre = 0;

    for (int i = 1;i < t;i++) {
        ll v = abs(a[i] - a[i - 1]);
        v *= (i - 0);
        ll an = pre + v;
        pre = an;
        ans += an;

    }
    cout << ans;
    return 0;
}
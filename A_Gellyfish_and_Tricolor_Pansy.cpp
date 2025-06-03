/**
 *
 * Author : Md.Ariful Islam
 * Date : 02-06-2025
 * time : 21:17:24
 * Problem Name : A_Gellyfish_and_Tricolor_Pansy
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a = min(a, c);
    b = min(b, d);
    if(min(a,b)==b){
        cout << "Gellyfish\n";
        return;
    }
    cout << "Flower\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 22-12-2024
 * time : 20:41:22
 * Problem Name : A_Preparing_for_the_Olympiad
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
void solve() {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;

    vec days = { a, b, c };
    ll cycle_sum = a + b + c;
    ll full_cycles = n / cycle_sum;
    ll covered_distance = full_cycles * cycle_sum;
    ll day = full_cycles * 3;

    for (int i = 0; i < 3 && covered_distance < n; ++i) {
        covered_distance += days[i];
        day++;
    }

    cout << day << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
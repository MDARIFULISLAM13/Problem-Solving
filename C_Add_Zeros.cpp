// #include <bits/stdc++.h>

// using namespace std;

// typedef long long ll;

// map<ll, bool> done;
// map<ll, vector<ll>> mp;

// ll n, ans = 0;

// void dfs(ll len) {
//     done[len] = 1;

//     ans = max(ans, len);

//     for (auto i : mp[len - n]) {
//         if (!done[len + i - 1]) {
//             dfs(len + i - 1);
//         }
//     }
// }

// void solve() {
//     cin >> n;
//     ans = 0;
//     done.clear();
//     mp.clear();

//     for (int i = 1; i <= n; ++i) {
//         ll a;
//         cin >> a;
//         a -= (n - i + 1);

//         if (i > 1) {
//             mp[a].push_back(i);
//         }
//     }

//     dfs(n);
//     cout << ans << '\n';
// }

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         solve();
//     }

//     return 0;
// }


/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-10-2024
 * time : 21:50:34
 * Problem Name : C_Add_Zeros
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

    }

    return 0;
}
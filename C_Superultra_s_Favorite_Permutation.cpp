/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-11-2024
 * time : 20:56:26
 * Problem Name : C_Superultra_s_Favorite_Permutation
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
const int lm = 200000;
bitset<lm> ip;
vector<int> p;
void arif(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i * i; j <= n; j += i * 2)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;

}
void solve() {

    int n;
    cin >> n;
    int x = n;
    if (x % 2 == 0) {
        x -= 1;
    }
    bool ck = true;
    int v = 0;
    for (int i = 2;i <= n;i += 2) {
        if (ip[i + x] == false) {
            ck = false;
            v = i;
            break;
        }
    }
    if (ck == true) {
        cout << -1 << endl;
        return;
    }
    for (int i = 1;i <= n;i += 2) {
        cout << i << " ";
    }
    cout << v << " ";
    for (int i = 2;i <= n;i += 2) {
        if (i != v) {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arif(lm);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
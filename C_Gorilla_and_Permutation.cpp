/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-07-2024
 * time : 20:53:56
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
void arif() {
    ll n, m, k;
    cin >> n >> m >> k;
    for (int i = n;i > m;i--) {
        cout << i << " ";
    }
    for (int i = 1;i <= m;i++) {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
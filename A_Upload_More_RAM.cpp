/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-06-2024
 * time : 20:57:47
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
    ll n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << n << endl;
        return;
    }
    n = k * n;
    n -= (k - 1);
    cout << n << endl;
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
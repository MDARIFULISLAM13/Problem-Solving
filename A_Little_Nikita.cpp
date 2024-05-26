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
void arif() {
    int n, m;
    cin >> n >> m;
    if (n == m) {
        cout << "Yes\n";
        return;
    }
    else if (n < m) {
        cout << "No\n";
        return;
    }
    else if (n > m) {
        m -= n;
        if (m % 2 == 0) {
            cout << "Yes\n";
        }
        else {
            cout << "No\n";
        }
    }
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
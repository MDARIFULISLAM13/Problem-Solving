/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-06-2024
 * time : 13:07:46
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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a > c || (c / b < 1)) {
        cout << -1 << " " << b << endl;
    }
    else if ((c / b) == a) {
        cout << 1 << " " << -1 << endl;
    }
    else if (a == b && a == c) {
        cout << -1 << " " << c << endl;
    }
    else {
        cout << 1 << " " << b << endl;
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
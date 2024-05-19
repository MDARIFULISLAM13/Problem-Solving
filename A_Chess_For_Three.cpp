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
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    if (a == b && b == c) {
        if (a == 0) {
            cout << "0\n";
        }
        else {
            cout << "-1\n";
        }
    }
    else {
        ans = min((a + b), ((a + b + c) / 2));
        cout << ans << endl;
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
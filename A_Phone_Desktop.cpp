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
    int x, y;
    cin >> x >> y;
    int ans = 0;
    while (y > 1) {
        y -= 2;
        ans += 1;
        x -= 7;
    }
    while (y > 0) {
        y -= 1;
        ans += 1;
        x -= 11;
    }
    while (x > 0) {
        ans += 1;
        x -= 15;
    }
    cout << ans << endl;
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
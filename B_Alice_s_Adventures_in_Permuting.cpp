/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-11-2024
 * time : 21:54:59
 * Problem Name : B_Alice_s_Adventures_in_Permuting
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

ll countValuesLessThanN(ll n, ll b, ll c) {

    if (b <= 0 || (n - c) < 0) return 0;


    return min(n, (n - c) / b + 1);
}
void arif() {
    ll n, b, c;
    cin >> n >> b >> c;

    if (b == 0 && c == 0) {
        cout << -1 << endl;
        return;
    }
    if (b == 0) {
        if (c < n) {
            cout << n - 1 << endl;
            return;
        }
        else {
            cout << n << endl;return;
        }
    }
    if (c >= n) {
        cout << n << endl;
        return;
    }

    ll result = countValuesLessThanN(n, b, c);
    cout << n - result << endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        arif();
    }


    return 0;
}
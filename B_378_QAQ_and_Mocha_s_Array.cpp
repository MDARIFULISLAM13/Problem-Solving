
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
    ll n;
    cin >> n;
    vec a(n);
    for (ll i = 0;i < n;i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] == 1) {
        cout << "Yes\n";
        return;
    }
    else {
        for (int i = 0;i < n;i++) {
            ll x = a[i];
            ll xx = INT_MAX;
            int ck = 0;
            ;;
            for (int j = 0;j < n;j++) {

                if (a[j] % x != 0 && a[j] % xx != 0) {

                    if (ck == 0) {
                        xx = a[j];
                        ck = 1;
                    }
                    else {
                        break;
                    }

                }
                if (j == (n - 1)) {
                    cout << "Yes\n";
                    return;
                }

            }


        }
        cout << "No\n";
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

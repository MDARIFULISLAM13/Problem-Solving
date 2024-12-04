/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-11-2024
 * time : 00:39:29
 * Problem Name : B_Sort_the_Array
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    ll a[n + 1];

    a[0] = 0;
    for (ll i = 1;i <= n;i++) {
        cin >> a[i];

    }
    ll l = 1, r = 1;
    bool ck = false;
    for (int i = 2;i <= n;i++) {
        if (a[i] < a[i - 1]) {
            if (ck == false) {
                l = i - 1;
                ll v = a[i - 1];
                ck = true;
                while (a[i] < v) {


                    r = i;
                    if (a[i] > a[i - 1] && a[i] < v) {
                        cout << "no\n";
                        return 0;
                    }
                    if (i == n) {
                        break;
                    }



                    ++i;
                }
                if (a[r] < a[max(1ll * 0, l - 1)]) {

                    cout << "no\n";
                    return 0;

                }
            }
            else {
                cout << "no\n";
                return 0;
            }
        }
    }

    cout << "yes\n";
    cout << l << " " << r;

    return 0;
}
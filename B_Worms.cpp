/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-07-2024
 * time : 13:52:14
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    vec a(n);
    vec sum;
    ll psum = 0;
    sum.push_back(0);
    for (auto& i : a) {
        cin >> i;
        psum += i;
        sum.push_back(psum);
    }
    ll ck;
    cin >> ck;

    for (int i = 0; i < ck; i++) {
        ll v;
        cin >> v;
        ll l = 1, h = n, ans = n;

        while (l <= h) {
            ll mid = l + (h - l) / 2;
            if (sum[mid] > v) {
                ans = mid;
                h = mid - 1;
            }
            else if (sum[mid] < v) {
                l = mid + 1;
            }
            else {
                ans = mid;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-08-2024
 * time : 21:52:01
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
    int n;
    cin >> n;
    vec a(n);
    vec ps(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    ps[0] = 0;

    for (int i = 0; i < n; i++) {
        ps[i] = ps[i - 1] + a[i];
    }
    string s;
    cin >> s;
    int l = 0, r = s.length() - 1;
    ll ans = 0;
    while (l < r) {
        if (s[l] == 'L' && s[r] == 'R') {

            ans += ps[r] - ps[l - 1];
            l++;
            r--;


        }
        else {
            if (s[l] != 'L') l++;
            if (s[r] != 'R') r--;
        }
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
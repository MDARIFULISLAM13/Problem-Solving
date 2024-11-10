/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-10-2024
 * time : 21:15:02
 * Problem Name : B_Stalin_Sort
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
void arif() {
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    ll mx = 1e9;
    for (int i = 0;i < n;i++) {
        ll sum = i;
        for (int j = i + 1;j < n;j++) {
            if (a[j] > a[i]) {
                sum++;
            }
        }
        cout << sum << endl;
        mx = min(mx, sum);
    }
    cout << mx << endl;
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
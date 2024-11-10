/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-11-2024
 * time : 21:36:59
 * Problem Name : C_Trinity
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
    vec  v(n + 1);
    v[0] = 0;
    for (int i = 1;i <= n;i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    vec sum(n + 1);
    sum[0] = 0;
    for (int i = 1;i <= n;i++) {
        sum[i] = v[i] + v[i - 1];
    }
    int ans = INT_MAX;
    // for (auto i : sum) {
    //     cout << i << " ";
    // }
    // cout << endl;
    int j = 0;
    for (int i = n;i >= 1;i--) {
        int cr = 0;
        ll mx = v[i];
        auto upper = upper_bound(sum.begin(), sum.end(), mx);


        int x = upper - sum.begin();
        cr = x - 2 + j;
        if (cr >= 0) {
            ans = min(ans, cr);
        }

        j++;


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
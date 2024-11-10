/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-10-2024
 * time : 20:42:26
 * Problem Name : A_Rectangle_Arrangement
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
    ll mx = 0, mxx = 0;
    for (int i = 1;i <= n;i++) {
        ll w, h;
        cin >> w >> h;
        mx = max(w, mx);
        mxx = max(h, mxx);
    }
    cout << 2 * (mx + mxx) << endl;
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
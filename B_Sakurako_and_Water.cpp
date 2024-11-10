
/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-10-2024
 * time : 21:32:25
 * Problem Name : B_Sakurako_and_Water
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
int arif() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            cin >> a[i][j];
        }
    }
    vector<int>diff(n * 2 - 1, 0);
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < n;j++) {
            diff[i - j + n - 1] = min(diff[i - j + n - 1], a[i][j]);
        }
    }
    int ans = 0;
    for (auto i : diff) {
        if (i < 0) {
            ans -= i;
        }
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cout << arif() << endl;
    }

    return 0;
}
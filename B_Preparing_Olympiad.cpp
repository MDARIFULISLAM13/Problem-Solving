/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-10-2024
 * time : 18:58:21
 * Problem Name : B_Preparing_Olympiad
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

    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int ans = 0;
    for (int i = 0;i < n;i++) {
        for (int j = i + 1;j < n;j++) {
            if (a[i] + a[j] >= l && a[i] + a[j] <= r && abs(a[i] - a[j]) >= x) {
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}
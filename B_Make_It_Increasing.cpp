/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-08-2024
 * time : 01:58:19
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
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    if (a[n - 1] < n - 1) {
        cout << "-1\n";
        return;
    }
    int ans = 0;
    for (int i = n - 2;i >= 0;i--) {
        while (a[i + 1] <= a[i] && a[i] > 0) {
            ans++;
            a[i] /= 2;
        }
        if (a[i] == a[i + 1]) {
            cout << "-1\n";
            return;
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
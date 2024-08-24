/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-08-2024
 * time : 20:38:08
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
    sort(a.begin(), a.end());
    int mx = 1, cr = 1;
    for (int i = 1;i < n;i++) {
        if (a[i] == a[i - 1]) {
            cr++;
            mx = max(cr, mx);
        }
        else {
            cr = 1;
        }
    }
    cout << n - mx << endl;
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
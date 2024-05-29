/**
 *
 * Author : Md.Ariful Islam
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
    int n, k;
    cin >> n >> k;
    vec a(n);
    for (int i = 0;i < n;i++)cin >> a[i];

    int cr = 1;
    int ans = 0;
    for (int i = 0;i < a.size();i++) {
        if (a[i] == cr) {
            cr++;
        }
        else if (a[i] + 1 == a[i + k] || a[i] - 1 == a[i + k]) {

            ans++;
        }
        else {
            ans++;
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
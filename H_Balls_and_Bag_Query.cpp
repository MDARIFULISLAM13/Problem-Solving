/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-08-2024
 * time : 22:36:58
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

    vector<int>a(1e6 + 123, 0);
    int t;
    cin >> t;
    int ans = 0;
    while (t--) {
        int v;
        cin >> v;
        if (v == 1) {
            int x;
            cin >> x;
            if (a[x] == 0) {
                ans++;
                a[x]++;
            }
            else {
                a[x]++;
            }

        }
        else if (v == 2) {
            int x;
            cin >> x;
            if (a[x] == 1) {
                ans--;
                a[x] = a[x] - 1;
            }
            else if (a[x] > 1) {
                a[x] = a[x] - 1;
            }
        }
        else {
            cout << ans << endl;
        }
    }

    return 0;
}
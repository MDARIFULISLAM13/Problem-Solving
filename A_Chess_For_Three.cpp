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
    vec a(3);
    for (int i = 0;i < 3;i++) {
        cin >> a[i];
    }
    int ans = 0;
    while (1) {
        sort(a.begin(), a.end());
        if (a[0] == 0) {
            a.erase(a.begin());

        }
        if (a[0] == 0) {
            a.erase(a.begin());

        }
        if (a.size() <= 1) {
            break;
        }
        ans++;
        a[a.size() - 1] -= 1;
        a[0] -= 1;

    }
    if (a[0] % 2 != 0) {
        cout << "-1\n";
        return;
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
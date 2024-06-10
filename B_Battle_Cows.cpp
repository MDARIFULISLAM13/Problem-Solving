/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-06-2024
 * time : 11:39:46
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
    ll n, k;
    cin >> n >> k;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    ll v = a[k - 1];
    int index = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] > v) {
            index = i;
            break;
        }

    }
    if (k - 1 < index) {
        cout << index - 1 << endl;
        return;
    }

    int ans1 = index - 1;
    int ans2 = 0;
    a[k - 1] = a[index];
    a[index] = v;

    for (int i = max((index - 1), 0);i <= n;i++) {
        if (a[i] > v) {
            break;
        }
        else {
            ans2++;
        }
    }
    ans2 -= 1;
    ans2 = max(0, ans2);
    cout << ans2 << endl;






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
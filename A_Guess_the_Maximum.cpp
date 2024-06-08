/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2024
 * time : 20:42:49
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
    int mn = INT_MAX;
    for (int i = 1;i < n;i++) {
        int x = max(a[i], a[i - 1]);
        x -= 1;
        mn = min(mn, x);
    }
    cout << mn << endl;
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
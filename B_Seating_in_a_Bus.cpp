/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-08-2024
 * time : 20:58:31
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
    vector<bool>a(n + 1, false);
    vector<int>b(n);
    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }
    a[b[0]] = true;
    for (int i = 1;i < n - 1;i++) {
        int v = b[i];
        if (a[v - 1] == true || a[v + 1] == true) {
            a[v] = true;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
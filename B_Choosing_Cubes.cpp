/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 20:54:01
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
    int n, f, k;
    cin >> n >> f >> k;
    vec a(n);
    for (int i = 0;i < n;i++)cin >> a[i];
    int v = a[f - 1];
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    if (a[k - 1] > v) {
        cout << "NO\n";
        return;
    }
    else if (a[k - 1] == v && a[k] == v) {
        cout << "MAYBE\n";
        return;
    }
    else {
        cout << "YES\n";
    }


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
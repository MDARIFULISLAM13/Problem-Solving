/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-08-2024
 * time : 20:44:37
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
    if (n % 2 == 0) {
        cout << "-1\n";
        return;
    }
    vec a(n);
    int l = 0, r = n - 1;
    for (int i = 1;i <= n;++i) {
        if (i % 2 == 1) {
            a[l] = i;
            l++;
        }
        else {
            a[r] = i;
            r--;
        }
    }
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
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
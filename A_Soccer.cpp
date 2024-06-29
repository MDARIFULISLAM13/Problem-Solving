/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-06-2024
 * time : 14:00:01
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
    ll a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (b1 >= a1 && b2 <= a2) {
        cout << "NO\n";
        return;
    }

    if (a1 >= b1 && a2 <= b2) {
        cout << "NO\n";
        return;
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
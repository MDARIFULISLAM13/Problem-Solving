/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-06-2024
 * time : 20:53:00
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
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    sort(a.begin(), a.end());
    ll sum = 0;
    sum += abs(a[1] - a[0]);
    sum += abs(a[2] - a[1]);
    cout << sum << endl;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-08-2024
 * time : 00:30:01
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
    ll n, k, x;
    cin >> n >> k >> x;
    ll min_sum = (k * (k + 1)) / 2;
    if (min_sum > x) {
        cout << "NO\n";
        return;

    }
    ll y = n - k;

    ll sum = ((n * (n + 1)) / 2) - ((y * (y + 1)) / 2);
    if (sum < x) {
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
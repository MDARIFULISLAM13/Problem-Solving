/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-08-2024
 * time : 04:22:47
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

    ll a, b, k;
    cin >> a >> b >> k;
    if (a >= k) {
        a -= k;
        cout << a << " " << b;
    }
    else {

        k -= a;
        a = 0;
        b = (max((0 * 1ll), b - k));
        cout << a << " " << b;
    }
    return 0;
}
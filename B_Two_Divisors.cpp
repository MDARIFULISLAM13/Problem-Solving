
/**
*
* Author : Md.Ariful Islam
* Date : 20-09-2024
* time : 04:05:40
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

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (b % a == 0) {
            cout << (b * b) / a << endl;
        }
        else {
            cout << (b * a) / __gcd(a, b) << endl;
        }

    }

    return 0;
}

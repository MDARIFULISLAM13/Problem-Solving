
/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2024
 * time : 21:03:39
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
        ll x, y;
        cin >> x >> y;
        ll z = x ^ y;
        ll maxLength = 1;
        while (z % 2 == 0) {
            z >>= 1;
            maxLength <<= 1;
        }
        cout << maxLength << endl;


    }
    return 0;
}
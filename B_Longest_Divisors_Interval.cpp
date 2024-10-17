/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-10-2024
 * time : 01:26:09
 * Problem Name : B_Longest_Divisors_Interval
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
        int ans = 0;
        ll n;
        cin >> n;
        for (int i = 1;i <= n;i++) {
            if (n % i != 0) {
                break;
            }
            else {
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
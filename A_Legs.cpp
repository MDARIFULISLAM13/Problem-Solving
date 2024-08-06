/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-07-2024
 * time : 21:31:31
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
        int n;
        int ans = 0;
        cin >> n;
        if (n % 4 != 0) {
            ans++;
        }
        ans += (n / 4);
        cout << ans << endl;
    }


    return 0;
}
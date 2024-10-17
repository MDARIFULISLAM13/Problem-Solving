/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * time : 20:17:26
 * Problem Name : E_Consistency_Is_the_Key
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
    for (int i = 1;i <= t;i++) {
        cout << "Case #" << i << ": ";
        float x, y;
        cin >> x >> y;
        float xn = x, yn = y, ans = 1;
        while (xn >= yn) {
            ans++;
            yn += y;
            xn = xn + (x / 2.0);
            x = x / 2.0;


        }

        cout << ans << endl;
    }

    return 0;
}
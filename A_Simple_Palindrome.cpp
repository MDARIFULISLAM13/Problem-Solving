/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-09-2024
 * time : 20:41:30
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
        cin >> n;



        string main = "aeiou";
        string ans = "";

        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < n / 5 + (i < n % 5); ++j) {
                ans += main[i];
            }
        }
        cout << ans << endl;

    }

    return 0;
}
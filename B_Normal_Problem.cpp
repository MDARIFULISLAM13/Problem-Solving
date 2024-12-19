/**
 *
 * Author : Md.Ariful Islam
 * Date : 15-12-2024
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string a, b = "";
        cin >> a;
        reverse(a.begin(), a.end());
        for (char c : a) {
            if (c == 'p') b += 'q';
            else if (c == 'q') b += 'p';
            else b += 'w';
        }
        cout << b << endl;
    }

    return 0;
}

/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-02-2025
 * time : 00:11:04
 * Problem Name : A_Skibidus_and_Amog_u
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
        string s;
        cin >> s;
        s[s.size() - 1] = ' ';
        s[s.size() - 2] = 'i';
        cout << s << endl;
    }

    return 0;
}
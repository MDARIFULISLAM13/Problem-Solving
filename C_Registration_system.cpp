/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-12-2024
 * time : 00:10:48
 * Problem Name : C_Registration_system
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

    map<string, int>m;
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        if (m[s] == 0) {
            cout << "OK\n";
            m[s] = 1;
        }
        else {
            cout << s << m[s] << endl;
            m[s]++;
        }



    }
}

/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-12-2024
 * time : 11:49:00
 * Problem Name : C_Saraga
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

    string s, ss;
    cin >> s >> ss;
    string fs = "";
    int pre = INT_MAX;
    map<char, int>map;
    for (int i = ss.size() - 2;i >= 0;i--) {
        if (map[ss[i]] == 0) {
            map[ss[i]] = i + 1;
        }
    }

    // for (auto& entry : map) {
    //     cout << "Character: " << entry.first << " Last Index: " << entry.second << endl;
    // }


    for (int i = 1; i < s.size(); i++) {

        if (map[s[i]] != 0) {

            int size = i + 1 + (ss.size() - map[s[i]]);

            if (size < pre) {

                string sss = s.substr(0, i + 1) + ss.substr(map[s[i]]);
                pre = size;
                fs = sss;
            }
            if (i > pre) {
                break;
            }

        }
    }
    if (pre != INT_MAX) {
        cout << fs;
        return 0;
    }

    cout << -1;
    return 0;
}


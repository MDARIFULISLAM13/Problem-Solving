/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-12-2024
 * time : 15:03:40
 * Problem Name : B_Replace_Character
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1) {
            cout << s << endl;
        }
        else {
            map<char, int>m;
            for (int i = 0;i < n;i++) {
                m[s[i]]++;
            }
            int mx = 0, mn = INT_MAX;
            char mxi, mni;
            for (char i = 'a';i <= 'z';i++) {
                if (mx < m[i]) {

                    mx = m[i];
                    mxi = i;

                }
                if (mn >= m[i] && m[i] != 0) {
                    mn = m[i];
                    mni = i;

                }
            }
            bool ck = false;
            for (int i = 0;i < n;i++) {
                if (s[i] == mni && ck == false) {
                    ck = true;
                    cout << mxi;
                }
                else {
                    cout << s[i];
                }

            }
            cout << endl;

        }
    }

    return 0;
}

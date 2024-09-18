/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-09-2024
 * time : 00:07:59
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
vector<string> colors = {
       "ash","red", "blue","gold","pink", "grey", "cyan", "black",  "white", "brown", "silver", "orange",  "green",
       "yellow","purple", };

void solve() {
    string s;
    cin >> s;
    map<char, int>m;
    for (int i = 0;i < s.size();i++) {
        m[s[i]]++;
    }
    int ans = 0;
    for (auto& i : colors) {
        string s = i;
        int size = s.size();
        while (1) {
            int ck = 0;
            for (int i = 0;i < s.size();i++) {
                if (m[s[i]] > 0) {
                    ck++;
                }
            }
            if (ck == size) {
                ans++;
                for (int i = 0;i < s.size();i++) {
                    if (m[s[i]] > 0) {
                        m[s[i]]--;
                    }
                }
            }
            else {
                break;
            }
        }
    }
    cout << ans << endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
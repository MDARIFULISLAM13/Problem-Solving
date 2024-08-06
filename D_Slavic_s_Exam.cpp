/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-08-2024
 * time : 21:07:09
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
void arif() {
    string s, t;
    cin >> s >> t;
    if (s.size() == t.size()) {
        for (int i = 0;i < s.size();i++) {
            if (s[i] != t[i]) {
                if (s[i] != '?') {
                    cout << "NO\n";
                    return;
                }
            }
        }
        cout << "YES\n";
        cout << t << endl;
        return;
    }
    else {
        vector<int>a(26);
        vector<int>b(26);
        int cnt = 0;
        for (int i = 0;i < s.size();i++) {
            if (s[i] == '?') {
                cnt++;
            }
            else {
                int v = s[i] - 'a';
                a[v]++;
            }
        }
        for (int i = 0;i < t.size();i++) {


            int v = t[i] - 'a';
            b[v]++;

        }

        vector<int>nw(26);
        for (int i = 0;i < 26;i++) {
            if (b[i] > a[i]) {
                int x = b[i] - a[i];
                a[i] -= x;

                cnt -= b[i];
                nw[i] = x;

                if (cnt < 0) {
                    cout << "NO\n";
                    return;
                }
            }

        }
        cout << "YES\n";
        string nww = "";
        for (int i = 0;i < 26;i++) {
            for (int j = 0;j < nw[i];j++) {
                char ch = 'a' + i;
                nww.push_back(ch);
            }
        }
        for (int i = 0;i < cnt;i++) {
            nww.push_back('a');
        }
        int ccc = 0;
        for (int i = 0;i < s.size();i++) {
            if (s[i] == '?') {
                cout << nww[ccc];
                ccc++;
            }
            else {
                cout << s[i];
            }
        }
        cout << endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
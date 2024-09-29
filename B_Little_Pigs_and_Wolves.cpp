/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-09-2024
 * time : 13:09:37
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
int n, m;
bool ckr(int j) {
    if (j < m && j >= 0) {
        return true;
    }
    return false;
}
bool ckc(int j) {
    if (j < n && j >= 0) {
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string>s;

    cin >> n >> m;
    int x = n;
    while (x--) {
        string st;
        cin >> st;
        s.push_back(st);
    }
    int ans = 0;
    for (int i = 0;i < s.size();i++) {

        string sn = s[i];

        for (int j = 0;j < m;j++) {
            if (sn[j] == 'W') {
                if (ckc(i - 1)) {
                    string si = s[i - 1];
                    if (si[j] == 'P') {
                        ans++;
                        si[j] = '.';
                        continue;
                    }
                }
                if (ckr(j - 1)) {
                    if (sn[j - 1] == 'P') {
                        ans++;
                        sn[j - 1] = '.';
                        continue;
                    }
                }
                if (ckr(j + 1)) {
                    if (sn[j + 1] == 'P') {
                        ans++;
                        sn[j + 1] = '.';
                        continue;
                    }
                }
                if (ckc(i + 1)) {
                    string si = s[i + 1];
                    if (si[j] == 'P') {
                        ans++;
                        si[j] = '.';
                        continue;
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 04:20:46
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

    string s;
    cin >> s;
    int x = s.size();
    int cnt = x / 2;
    x -= 1;
    int v = 0;
    int ans = 0;
    while (v < cnt) {
        if (s[v] != s[x]) {
            ans++;
        }
        v++;x--;
    }
    if (ans == 1 || (ans == 0 && (s.size() % 2 != 0))) {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";


    return 0;
}
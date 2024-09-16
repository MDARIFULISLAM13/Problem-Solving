/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-09-2024
 * time : 19:30:55
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
    int size = s.size();

    string ss = "Samsung";
    int cnt = 0;
    int j = 0;
    for (int i = 0;i < size;i++) {
        if (s[i] == ss[j]) {
            cnt++;
            j++;
        }
        if (cnt == 7) {
            cout << "SRBD\n";
            return 0;
        }
    }
    if (cnt == 7) {
        cout << "SRBD\n";
        return 0;
    }
    cout << "GHOST\n";

    return 0;
}
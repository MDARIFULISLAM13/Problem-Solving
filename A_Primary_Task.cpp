
/**
 *
 * Author : Md.Ariful Islam
 * Date : 13-08-2024
 * time : 21:11:50
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

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        if (s.size() >= 3) {
            if (s[0] == '1' && s[1] == '0' && (s[2] >= '2' || (s.size() >= 4 && s[2] >= '1'))) {
                cout << "YES" << '\n';
                continue;
            }
        }
        cout << "NO\n";

    }

    return 0;
}
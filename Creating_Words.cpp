/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-06-2024
 * time : 20:35:41
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
        string s, ss;
        cin >> s >> ss;
        char c = s[0];
        s[0] = ss[0];
        ss[0] = c;
        cout << s << " " << ss << endl;
    }

    return 0;
}
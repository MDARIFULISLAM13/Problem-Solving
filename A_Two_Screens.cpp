/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * time : 20:44:40
 * Problem Name : A_Two_Screens
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
    string s, ss;
    cin >> s >> ss;
    int n = s.size(), m = ss.size();

    int cnt = 0;
    for (int i = 0;i < min(n, m);i++) {
        if (s[i] == ss[i]) {
            cnt++;
        }
        else {
            break;
        }
    }
    int Ans = cnt + (n - cnt) + (m - cnt);
    if (cnt != 0) {
        Ans++;
    }
    cout << Ans << endl;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-04-21
 * Time : 20:57:40
 * Problem Name : B_Alternating_String
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    string s;
    cin >> s;

   
     ll cnt = 0;

     for (int i = 0; i < s.size(); i++)
    {
        if (i + 3 < s.size() && s[i] == s[i + 1] && s[i] == s[i + 2] && s[i] == s[i + 3])
        {
            cout << "NO\n";
            return;
        }
        else if (i + 2 < s.size() && s[i] == s[i + 1] && s[i] == s[i + 2])
        {
            cnt += 3;
            i += 2;
        }
        else if (i + 1 < s.size() && s[i] == s[i + 1])
        {
            cnt += 2;
            i += 1;
        }
    }

    if (cnt > 4)
    {
        cout << "NO\n";
    }
    else
    {
        cout<<"YES\n";
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
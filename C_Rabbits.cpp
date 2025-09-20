/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-09-20
 * Time : 21:04:00
 * Problem Name : C_Rabbits
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));
ll cnt = 0;
bool ck(const string &s)
{
    ll n = s.size();
    ll x = n - 1;
    for (int i = 0; i < n;)
    {
        if (s[i] == '0' && i + 1 <= x)
        {
            if (i + 2 <= x && s[i + 1] == '1' && s[i + 2] == '1')
            {
                return false;
            }
            else if (s[i + 1] == '0')
            {
                i += 2;
            }
            else if (i + 2 <= x && s[i + 2] == '0' && s[i + 1] == '1')
            {
                i += 3;
            }
            else
            {
                return false;
            }
        }
        else if (s[i] == '0' && i + 1 == x)
        {
            if (s[i + 1] == '0')
            {
                i += 2;
            }
            else
            {

                return false;
            }
        }
        else
        {
            ++i;
        }
    }

    return true;
}
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (cnt == 48)
    {
        cout << s << endl;
    }
    ll x = n - 1;
    if (s[0] == '0' && s[x] != '0')
    {

        rev(s);
        if (ck(s) == true)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
    ///
    else if (s[0] == '0' && s[x] == '0')
    {
        string ss = s;

        if (ck(ss) == true)
        {
            cout << "YES\n";
            return;
        }
        ss.erase(ss.size() - 1, 1);
        if (ck(ss) == true)
        {
            cout << "YES\n";
            return;
        }
        ss.push_back('0');

        ss.erase(0, 1);
        if (ck(ss) == true)
        {
            cout << "YES\n";
            return;
        }
        ss.erase(ss.size() - 1, 1);
        if (ck(ss) == true)
        {
            cout << "YES\n";
            return;
        }
        cout << "NO\n";
        return;
    }
    ///
    else
    {

        if (ck(s) == true)
        {
            cout << "YES\n";
            return;
        }
        else
        {
            cout << "NO\n";
            return;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ++cnt;
        solve();
    }

    return 0;
}

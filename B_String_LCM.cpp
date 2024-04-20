/**
 *
 * Author : Md.Ariful Islam
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
void arif()
{
    string s, t;
    cin >> s >> t;
    int tl = t.size();
    int sl = s.size();
    if (sl == tl)
    {
        if (s == t)
        {
            cout << s << endl;
        }
        else
        {
            cout << "-1\n";
        }
        return;
    }
    int lcm = (sl * tl) / __gcd(sl, tl);

    string ss, tt;
    for (int i = 0; i < lcm / sl; i++)
    {
        ss += s;
    }
    for (int i = 0; i < lcm / tl; i++)
    {
        tt += t;
    }
    if (ss == tt)
    {
        cout << ss << endl;
    }
    else
    {
        cout << "-1\n";
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
        arif();

    return 0;
}
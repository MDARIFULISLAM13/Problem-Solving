/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-16
 * Time : 19:00:47
 * Problem Name : C_Chander_Gari
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
    ll n, c, r;
    cin >> n >> c >> r;
    ll sum = 0;
    vec v(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    if (sum <= c)
    {
        for (int i = 0; i < n; i++)
        {
            cout << '0';
        }
        cout << endl;
        return;
    }
    else
    {

        vec pre(n + 2, 0);

        for (int i = n; i >= 0; i--)
        {
            pre[i] = v[i] + pre[i + 1];
        }

        ll crr = c;
        string s;

        for (int i = 0; i < n; i++)
        {
            if (pre[i] <= crr)
            {
                s.push_back('0');
            
            }
            else
            {
                crr -= v[i];
                if (crr < 0)
                {
                    cout << "Impossible\n";
                    return;
                }
                else
                {
                    if (crr + r <= c)
                    {
                        s.push_back('1');
                        crr += r;
                    }
                    else if (crr < v[i + 1])
                    {
                        crr += r;
                        s.push_back('1');
                    }
                    else{
                        s.push_back('0');
                    }
                }
            }
            crr = min(crr, c);
        }

        cout << s << endl;
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
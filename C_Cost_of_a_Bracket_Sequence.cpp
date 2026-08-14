/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-09
 * Time : 21:26:10
 * Problem Name : C_Cost_of_a_Bracket_Sequence
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    ll ca = 0;
    vec v;

    for (int i = 0; i < n; i++)
    {
        if (k == 0)
            break;

        if (s[i] == '(')
        {
            ++ca;
            v.push_back(i);
        }
        else if (s[i] == ')')
        {
            --ca;
            if (ca < 0)
            {
                while (!v.empty())
                {
                    s[v.back()] = '?';
                    v.pop_back();
                    --k;
                    if (k == 0)
                        break;
                }
                ca = 0;
            }
        }
    }

    if (k != 0)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (k == 0)
                break;

            if (s[i] == ')')
            {
                s[i] = '?';
                --k;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '?')
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
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
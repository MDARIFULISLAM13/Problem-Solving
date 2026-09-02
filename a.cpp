/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-30
 * Time : 18:44:16
 * Problem Name : a
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n"
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

void solve()
{
    ll n;
    cin >> n;
    ll q;
    cin >> q;
    vec a(n), b(n);
    vector<string> as(n), bs(n);
    vector<bool> bck(65, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        string s = bitset<64>(a[i]).to_string();
        rev(s);
        as[i] = s;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        string s = bitset<64>(b[i]).to_string();
        rev(s);
        bs[i] = s;
        string ss = as[i];

        if (a[i] != b[i])
        {

            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] != ss[i])
                {

                    bck[i] = true;
                }
            }
        }
    }

    vec cv;
    for (int i = 0; i < 65; i++)
    {

        if (bck[i] == 1)
            cv.push_back(i);
    }

    vec ab(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        string s = as[i - 1];
        string ss = bs[i - 1];

        ll sum = 0;
        for (auto i : cv)
        {
            if (s[i] == '1' && ss[i] == '1')
            {
                sum += pow(2, i);
            }
        }

        ab[i] = sum;
    }

    vec pre(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + ab[i];
       
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout<<pre[r]-pre[l-1]<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
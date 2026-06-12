/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-21
 * Time : 21:28:11
 * Problem Name : C_Chipmunk_Theo_and_Equality
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
    ll n;
    cin >> n;
    multiset<ll> st;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        st.insert(x);
    }
    ll cnt = 0;
    while (1)
    {
        ll x = *st.begin();
        ll y = *st.rbegin();
        //  cout << x << " " << y << endl;
        if (x % 2 != 0)
            ++x;
        if (x >= y)
        {
            break;
        }
        else
        {
            st.erase(prev(st.end()));
            st.insert((y + 1) / 2);
            if (y % 2 == 0)
            {
                ++cnt;
            }
            else
            {
                cnt += 2;
            }
        }
    }

    // for (auto x : st)
    // {
    //     cout << x << " ";
    // }
    int first = *st.begin();

    int cnt1 = st.count(first);

    int cnt2 = st.size() - cnt1;

    cnt += min(cnt1, cnt2);

    cout << cnt << endl;
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
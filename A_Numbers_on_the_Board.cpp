/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-11-06
 * Time : 01:26:24
 * Problem Name : A_Numbers_on_the_Board
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
    ll a, b;
    cin >> a >> b;
    ll cnt = 0, sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    if (sum >= a && sum <= b)
    {
        cout << 0 << endl;
        return;
    }

    ll sum2 = sum;
    
    for (int i = a; i <= b; i++)
    {
        sum -= i;
        
        if (i != 0)
        {
            ++cnt;
        }
        if (sum > i && sum <= b)
        {
            break;
        }
    }
    ll cnt2 = 0;

    for (int i = b; i >= a; i--)
    {
        sum2 -= i;

        if (i != 0)
        {
            ++cnt2;
        }
        if (sum2 >= a && sum2 < i)
        {
            break;
        }
    }
    cout << min(cnt, cnt2) << endl;
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
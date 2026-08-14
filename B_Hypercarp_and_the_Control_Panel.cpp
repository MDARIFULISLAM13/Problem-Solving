/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-12
 * Time : 16:55:48
 * Problem Name : B_Hypercarp_and_the_Control_Panel
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
    vec v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1])
            ++cnt;
    }
 

    for (int i = 0; i < n; i++)
    {

        if (i == 0 && v[i] != v[i + 1])
        {
            

            --cnt;
            cout << v[i] << endl;
            break;
        }
        else if (i == n - 1 && v[i - 1] != v[i])
        {
            --cnt;
            cout << v[i] << endl;

            break;
        }
        else if ((i!=0 && i!=n-1)  && v[i] != v[i + 1] && v[i - 1] != v[i + 1])
        {
            --cnt;
            cout << v[i] << endl;

            break;
        }
    }
   
    cnt = max(0ll, cnt);
    cout << n - cnt << endl;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-06-07
 * Time : 20:46:48
 * Problem Name : B_Palindrome_Twelve_and_Two_Terms
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

    for (int i = 0; i < 10; i++)
    {

        if ( (n>=i) && (n - i) % 12 == 0)
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }

    for (int i = 11; i < 100; i += 11)
    {
        if ((n >= i) &&  (n - i) % 12 == 0)
        {
            cout << i << " " << n - i << endl;
            return;
        }
    }
   
    cout << -1 << endl;
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
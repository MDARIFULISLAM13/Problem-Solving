/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-08-21
 * Time : 11:10:23
 * Problem Name : B_Chat_Order
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
    vector<string> s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    map<string, bool> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if(mp[s[i]]==0){
            mp[s[i]]=1;
            cout<<s[i]<<endl;
        }

        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // int t;
    // cin >> t;
    // while (t--)
        solve();

    return 0;
}
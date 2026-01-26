/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-12-23
 * Time : 21:21:58
 * Problem Name : C_Blackslex_and_Number_Theory
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
  cin>>n;
  vec v(n);
  for(int i=0;i<n;i++)
      cin >> v[i];
  sort(v);

  ll ans1 = v[0];

  ll ans2 = v[1] - v[0];


  cout << max(ans1, ans2) << endl;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-07
 * Time : 20:41:47
 * Problem Name : A_Binary_Array_Game
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
 for(auto &i : v)cin>>i;
 if(v[0]==1 || v.back()==1){
     cout << "Alice\n";
     return;
 }
 else{
     cout << "Bob\n";
     return;
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
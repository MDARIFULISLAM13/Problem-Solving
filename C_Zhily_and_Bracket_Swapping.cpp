/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-05-10
 * Time : 04:29:23
 * Problem Name : C_Zhily_and_Bracket_Swapping
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
    string s, ss;
    cin >> s >> ss;
    ll l = 0, r = 0;

    if (s[0] == ')' || ss[0] == ')' || s[n - 1] == '(' || ss[n - 1] == '('){
        no return;
    }
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            ++l;
        }
        else if (s[i] == ')')
        {
            ++r;
        }
        if (ss[i] == '(')
        {
            ++l;
        }
        else if(ss[i]==')'){
            ++r;
        }

        if(r>l){
            no return;
        }
    }

    if(l==r)yes else no
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
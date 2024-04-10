/**
 *
 * Author : Md.Ariful Islam
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
void solve()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    char ck = s[0];
    for (int i = 1; i < s.size(); i++)
    {
        ck += 1;
        if (ck != s[i])
        {
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    return 0;
}

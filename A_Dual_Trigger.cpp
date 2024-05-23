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
void arif()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll sum = 0;
    int x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            sum++;
            if (sum == 1) {
                x = i;
            }
            if (sum == 2) {
                y = i;
            }
        }
    }

    if (sum % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    if (sum == 2 && (x + 1 == y)) {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}
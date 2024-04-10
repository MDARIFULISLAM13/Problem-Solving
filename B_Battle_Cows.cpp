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
    ll n, k;
    cin >> n >> k;
    vector<ll> a;

    for (int i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        a.push_back(v);
    }
    ll count = 0;
    ll ck = a[k - 1];
    a.erase(a.begin() + (k - 1));
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > ck)
        {
            break;
        }
        count++;
    }
    cout << count << endl;
    return;
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

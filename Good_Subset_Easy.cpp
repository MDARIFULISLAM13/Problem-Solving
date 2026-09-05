/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-09-02
 * Time : 21:00:41
 * Problem Name : Good_Subset_Easy
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
const int lm = 1e7 + 123;
bitset<lm> ip;
vector<int> p;
void arif(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i + i; j <= n; j += i)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;
}
void solve()
{

    ll n;
    cin >> n;

    vec v(n);
    vec bt(31, 0);
    for (int i = 0; i < n; i++)
    {

        cin >> v[i];

        int bit = 0;

        while ((1 << (bit + 1)) <= v[i])
        {
            bit++;
        }
        bt[bit]++;
    }

    sort(bt);
    rev(bt);
    cout << bt[0] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arif(lm);
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
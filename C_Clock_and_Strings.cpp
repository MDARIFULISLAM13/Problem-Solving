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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int aa = max(a, b);
    int bb = min(a, b);

    int ck = 0;
    for (int i = bb; i <= aa; i++)
    {
        if (i == c || i == d)
        {
            ck++;
        }
    }
    if (ck % 2 == 0)
    {
        cout << "NO\n";
    }
    else
    {
     cout << "YES\n";
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
    {
        arif();
    }

    return 0;
}
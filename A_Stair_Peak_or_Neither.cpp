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
    int a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c)
    {
        cout << "STAIR\n";
    }
    else if (a < b && b > c)
    {
        cout << "PEAK\n";
    }
    else
    {
        cout << "NONE\n";
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
    };
    return 0;
}

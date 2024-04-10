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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x, y;
    cin >> x >> y;
    for (int i = 0; i < x.size(); i++)
    {
        if (y[i] > x[i])
        {
            cout << "-1";
            return 0;
        }
    }
    cout << y << endl;
    return 0;
}

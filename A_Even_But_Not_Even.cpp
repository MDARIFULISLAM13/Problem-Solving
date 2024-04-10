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
    int n;
    string s;
    cin >> n >> s;
    vector<int> a;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        if (x % 2 != 0)
        {
            a.push_back(x);
            count++;
        }
        if (count == 2)
        {
            break;
        }
    }
    if (count == 2)
    {
        cout << a[0] << a[1] << endl;
    }
    else
    {
        cout << "-1\n";
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

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
    string s;
    cin >> s;
    string a;
    a += s[0];
    a += s[1];

    int b = stoi(a);

    if (b > 0 && b < 12)
    {
        cout << s << " AM\n";
        return;
    }
    else if (b == 12)
    {
        cout << s << " PM\n";
        return;
    }
    else if (b == 0)
    {
        cout << "12" << s[2] << s[3] << s[4] << " AM\n";
        return;
    }

    else
    {
        if (b - 12 < 10)
        {
            cout << "0";
        }
        cout << b - 12 << s[2] << s[3] << s[4] << " PM\n";
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
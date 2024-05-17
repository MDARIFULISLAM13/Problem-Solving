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
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << "YES\n";
            char x = s[i];
            s[i] = s[i + 1];
            s[i + 1] = x;
            cout << s << endl;
            return;
        }
    }
    cout << "NO\n";
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
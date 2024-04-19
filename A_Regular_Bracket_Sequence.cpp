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
    if (s.size() % 2 != 0)
    {
        cout << "NO\n";
        return;
    }
    if (s[0] == ')' || s[s.size() - 1] == '(')
    {
        cout << "NO\n";
        return;
    }
    int n = s.size() / 2;
    int a = 0, b = 0, c = 0;
    for (char ch : s)
    {
        if (ch == '?')
        {
            c++;
        }
        if (ch == '(')
        {
            a++;
        }
        if (ch == ')')
        {
            b++;
        }
    }
    if ((a + c >= n) && (b + c >= n))
    {
        cout << "YES\n";
        return;
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
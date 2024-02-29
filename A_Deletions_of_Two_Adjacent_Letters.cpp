#include <bits/stdc++.h>
using namespace std;
void arif()
{
    string a;
    char c;
    cin >> a >> c;
    int ln = a.length();
    for (int i = 0; i < ln; i++)
    {
        if (a[i] == c && i % 2 == 0)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}
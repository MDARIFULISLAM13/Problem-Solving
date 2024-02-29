#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    transform(a.begin(), a.end(), a.begin(), [](char b)
              { return toupper(b); });
    a.erase(unique(a.begin(), a.end()), a.end());
    string an = "MEOW";

    if (a.compare(an) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
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
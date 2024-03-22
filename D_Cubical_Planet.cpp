#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    if (a == d || b == e || c == f)
    {
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
}

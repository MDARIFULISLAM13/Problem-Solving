#include <iostream>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

       if (k >= n || k >= m)
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

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

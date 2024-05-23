#include <iostream>
using namespace std;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a = (n / m);
    if (n % m != 0) {
        a += 1;
    }
    a = (n - a);

    if (a <= k || m == 1 || n == k) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";


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

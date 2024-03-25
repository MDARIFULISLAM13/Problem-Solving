#include <iostream>
#include <algorithm>
using namespace std;

void arif()
{
    long long a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;

    if (b > a)
    {
        swap(y, x);
        swap(a, b);
    }

    long long res = 1e18;

    long long bb = max(b - n, y);
    long long aa = max(a - (n - (b - bb)), x);
    res = min(res, aa * bb);

    long long aa2 = max(a - n, x);
    long long bb2 = max(b - (n - (a - aa2)), y);
    res = min(res, aa2 * bb2);

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}

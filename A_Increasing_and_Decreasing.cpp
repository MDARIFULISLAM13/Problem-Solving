#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int x, y, n;
    cin >> x >> y >> n;
    vector<int> a;
    int t = y, c = 1;
    for (int i = 1; i <= n; i++)
    {
        if (t < x)
        {
            cout << "-1\n";
            return;
        }
        a.push_back(t);
        int v = t - c;
        t -= c;

        c++;
    }
    reverse(a.begin(), a.end());
    a[0] = x;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}
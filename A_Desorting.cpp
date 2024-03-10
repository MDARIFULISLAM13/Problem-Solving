#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int a[n];
    int next = 0;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << "0\n";
            return;
        }
    }
    for (int i = 1; i < n; i++)
    {
        int ans = abs(a[i] - a[i - 1]);
        if (ans < mini)
        {
            mini = ans;
        }
    }
    int an = 0;
    mini = mini + 1;
    an = mini / 2;
    if (mini % 2 != 0)
    {
        an += 1;
    }
    cout << an << endl;
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
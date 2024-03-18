#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    auto it = unique(a.begin(), a.end());
    a.erase(it, a.end());

    int x = a.size();
    if ((n - x) % 2 != 0)
    {
        x -= 1;
    }

    cout << x << endl;
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
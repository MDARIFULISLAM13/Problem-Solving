#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;
    int v;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        a.push_back(v);
    }
    if (is_sorted(a.begin(), a.end()) || k > 1)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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
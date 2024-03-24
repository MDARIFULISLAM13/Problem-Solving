#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 1; i <= n + n; i++)
    {
        int v;
        cin >> v;
        auto it = find(a.begin(), a.end(), v);
        if (it == a.end())
        {
            a.push_back(v);
        }
    }

    for (auto it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
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
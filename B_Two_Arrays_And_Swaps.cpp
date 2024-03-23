#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        b.push_back(v);
    }

    sort(b.begin(), b.end());

    reverse(b.begin(), b.end());
    for (int i = 0; i < k; i++)
    {
        a.push_back(b[i]);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << sum << endl;
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
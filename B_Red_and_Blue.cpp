#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    int m;
    cin >> m;
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int v;
        cin >> v;
        b.push_back(v);
    }
    int sumt = 0;
    int nsum = 0;
    for (int i = 0; i < n; i++)
    {
        nsum += a[i];
        if (nsum > 0)
        {
            sumt += nsum;
            nsum = 0;
        }
    }
    nsum = 0;

    for (int i = 0; i < m; i++)
    {
        nsum += b[i];

        if (nsum > 0)
        {
            sumt += nsum;
            nsum = 0;
        }
    }
    cout << sumt << endl;
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
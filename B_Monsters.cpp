#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n, k;
    cin >> n >> k;
    vector<int> ve;
    vector<int> vl;
    vector<int> vg;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        if (v == k)
        {
            ve.push_back(i);
        }
        if (v < k)
        {
            vl.push_back(i);
        }
        if (v > k)
        {
            vg.push_back(i);
        }
    }
    for (int i = 0; i < ve.size(); i++)
    {
        cout << ve[i] << " ";
    }
    for (int i = 0; i < vl.size(); i++)
    {
        cout << vl[i] << " ";
    }
    for (int i = 0; i < vg.size(); i++)
    {
        cout << vg[i] << " ";
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
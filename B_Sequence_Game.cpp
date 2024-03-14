#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    int count = n;
    int d = 0;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
        if (v > 1)
        {
            d = 1;
        }
    }
    if (d == 0)
    {
        cout << n << endl;
        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << n + 1;
        cout << endl;
        int s = 0;
        for (int i = 0; i < a.size(); i++)
        {
            if (i > 0 && (s == 0 && a[i - 1] > 1))
            {
                cout << "1 ";
            }
            cout << a[i] << " ";
                }
        cout << endl;
    }
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
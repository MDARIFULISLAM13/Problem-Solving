#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int ce = 0, co = 0;
    int v;
    vector<int> a;
    for (int i = 0; i < t; i++)
    {
        cin >> v;
        if (v % 2 == 0)
        {
            ce++;
        }
        else
        {
            co++;
        }
        a.push_back(v);
    }
    if (ce > co)
    {
        for (int i = 0; i < t; i++)
        {
            if (a[i] % 2 != 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    if (ce < co)
    {
        for (int i = 0; i < t; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
}
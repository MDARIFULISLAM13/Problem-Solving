#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> a;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    if (t == 2)
    {
        cout << a[t - 1] + (a[t - 1] - a[t - 2]);
        return 0;
    }
    int p = a[1] - a[0];

    int c = 0;
    for (int i = 1; i < a.size(); i++)
    {
        int x = a[i] - a[i - 1];

        if (x != p)
        {

            c = 1;
            break;
        }
    }
    if (c == 1)
    {
        cout << a[t - 1];
    }
    else
    {
        cout << a[t - 1] + p;
    }
}
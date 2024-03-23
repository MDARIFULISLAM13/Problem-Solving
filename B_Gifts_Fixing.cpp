#include <bits/stdc++.h>
using namespace std;

void arif()
{
    vector<long long int> a;
    vector<long long int> b;
    int n;
    cin >> n;
    long long int am = LLONG_MAX, bm = LLONG_MAX;
    long long int move = 0;
    for (int i = 0; i < n; i++)
    {
        long long int v;
        cin >> v;
        if (v < am)
        {
            am = v;
        }
        a.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        long long int v;
        cin >> v;
        if (v < bm)
        {
            bm = v;
        }
        b.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        long long int x = a[i] - am;
        long long int y = b[i] - bm;
        move += max(x, y);
    }
    cout << move << endl;
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

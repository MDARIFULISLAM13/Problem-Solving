#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int move = 0;
    int v;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        a.push_back(v);
    }
    for (int i = 1; i < n; ++i)
    {
        if (a[i] <= a[i - 1])
        {
            int dif = a[i - 1] - a[i];
            int x = (dif / d) + 1;
            move += (dif / d) + 1;
            a[i] += d * x;
        }
    }
    cout << move << endl;
}

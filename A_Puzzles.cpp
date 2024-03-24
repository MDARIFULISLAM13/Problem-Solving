#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < k; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());

    int minimum = INT_MAX;
    for (int i = 0; i <= k - n; i++)
    {
        int s = a[i + n - 1] - a[i];
        if (s < minimum)
        {
            minimum = s;
        }
    }
    cout << minimum;
}
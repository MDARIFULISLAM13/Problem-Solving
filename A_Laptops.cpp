
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<pair<int, int>> v;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    sort(v.begin(), v.end());
    int qmax = v[0].second;
    int amax = v[0].first;
    for (int i = 1; i < v.size(); i++)
    {
        int na = v[i].first;
        int nq = v[i].second;
        if (nq <= qmax && amax < na)
        {
            cout << "Happy Alex\n";
            return 0;
        }
        qmax = nq;
        amax = na;
    }

    cout << "Poor Alex\n";
    return 0;
}
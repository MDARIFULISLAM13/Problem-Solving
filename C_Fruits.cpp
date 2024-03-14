#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    for (int i = 1; i <= n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    vector<string> name;
    vector<int> qn;
    for (int i = 1; i <= m; i++)
    {
        string s;
        cin >> s;
        auto it = find(name.begin(), name.end(), s);
        if (it != name.end())
        {

            int dis = distance(name.begin(), it);
            qn[dis]++;
        }
        else
        {
            name.push_back(s);
            qn.push_back(1);
        }
    }
    sort(qn.begin(), qn.end());
    reverse(qn.begin(), qn.end());
    int mv = 0;
    for (int i = 0; i < qn.size(); i++)
    {
        mv += qn[i] * a[i];
    }
    int mxv = 0;
    reverse(a.begin(), a.end());
    for (int i = 0; i < qn.size(); i++)
    {
        mxv += qn[i] * a[i];
    }
    cout << mv << " " << mxv;
}
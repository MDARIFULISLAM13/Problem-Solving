#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int main()
{

    int n, v;
    cin >> n;
    int mv = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v;
        mv = max(mv, v);
        a.push_back(v);
    }
    cout << mv << " ";
    sort(a.begin(), a.end());
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] == a[i - 1])
            continue;
        if (mv % a[i] == 0)
        {
            a.erase(a.begin() + i);
        }
    }
    cout << a[a.size() - 1];
}
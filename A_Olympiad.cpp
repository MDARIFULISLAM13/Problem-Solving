#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<int> a;
    for (int i = 0; i < t; i++)
    {
        int v;
        cin >> v;
        a.insert(v);
    }
    int s = a.size();
    auto it = a.find(0);
    if (it != a.end())
    {
        s -= 1;
    }
    cout << s << endl;
}
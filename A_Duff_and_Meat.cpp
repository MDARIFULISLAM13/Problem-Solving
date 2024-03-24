
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mn = INT_MAX;
    int cost = 0;
    while (n--)
    {
        int a, p;
        cin >> a >> p;
        mn = min(mn, p);
        cost += (mn * a);
    }
    cout << cost << endl;
}
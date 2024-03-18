#include <bits/stdc++.h>
using namespace std;
void arif()
{
    vector<int> a;
    for (int i = 0; i < 7; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    if (a[0] > a[1])
    {
        swap(a[0], a[1]);
    }
    if (a[0] > a[2])
    {
        swap(a[0], a[2]);
    }
    if (a[0] + a[1] >= a[3])
    {
        cout << a[0] << " " << a[1] << " " << a[2] << "\n";
        return;
    }
    cout << a[0] << " " << a[1] << " " << a[3] << "\n";
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
#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int m = ((n - 1) / 2);
    int count = 1;
    for (int i = m + 1; i < n; i++)
    {
        if (a[i] != a[m])
        {
            break;
        }

        count++;
    }

    cout << count << endl;
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
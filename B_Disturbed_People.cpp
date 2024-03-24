#include <bits/stdc++.h>
using namespace std;
int main()
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
    int count = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 0 && (a[i - 1] == 1 && a[i + 1] == 1))
        {
            count++;
            a[i + 1] = 0;
            a[i - 1] = 0;
        }
    }
    cout << count << endl;
}
#include <bits/stdc++.h>
using namespace std;
void arif()
{
    vector<int> a;
    vector<int> b;
    vector<int> t1;
    int n;
    cin >> n;

    int v;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> v >> s;
        if (s[0] == '1' && s[1] == '1')
        {
            t1.push_back(v);
        }
        else if (s[0] == '1' && s[1] == '0')
        {
            a.push_back(v);
        }
        else if (s[0] == '0' && s[1] == '1')
        {
            b.push_back(v);
        }
    }
    if (t1.empty() && b.empty())
    {
        cout << "-1\n";
        return;
    }
    else if (t1.empty() && a.empty())
    {
        cout << "-1\n";
        return;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(t1.begin(), t1.end());

    if (t1.empty())
    {
        int ans1 = a[0] + b[0];

        cout << ans1 << endl;
        return;
    }
    else
    {
        if (a.empty() || b.empty())
        {
            cout << t1[0] << endl;
        }
        else
        {
            cout << min((a[0] + b[0]), t1[0]) << endl;
        }

        return;
    }
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
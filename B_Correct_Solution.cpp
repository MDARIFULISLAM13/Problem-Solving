#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, m;
    cin >> n >> m;
    vector<char> a;
    for (int i = 0; i < n.size(); i++)
    {
        a.push_back(n[i]);
    }
    sort(a.begin(), a.end());
    if (a[0] == '0')
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != '0')
            {
                a[0] = a[i];
                a[i] = '0';
                break;
            }
        }
    }

    string ck;
    for (int i = 0; i < a.size(); i++)
    {
        ck += a[i];
    }
    if (ck.compare(m) == 0)
    {
        cout << "OK\n";
        return 0;
    }
    cout << "WRONG_ANSWER\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void arif()
{
    string a, b;
    cin >> a >> b;

    vector<char> va;
    vector<char> vb;
    vector<char> ck;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < a.size(); i++)
    {
        va.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
        vb.push_back(b[i]);
    }

    char p = va[0];
    int c = 0;
    for (int i = 0; i < vb.size(); i++)
    {
        if (va[c] != vb[i] && vb[i] != p)
        {
            cout << "NO\n";
            return;
        }
        if (va[c] == vb[i])
        {
            p = va[c];
            ck.push_back(p);
            c++;
        }
    }
    if (ck.size() != va.size())
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
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
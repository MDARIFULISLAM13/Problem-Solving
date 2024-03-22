#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void arif()
{
    string x1, x2;
    int y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = 1; i <= y1; i++)
    {
        x1 += '0';
    }
    for (int i = 1; i <= y2; i++)
    {
        x2 += '0';
    }
    int s1 = x1.size();
    int s2 = x2.size();
    if (s1 > s2)
    {
        cout << ">\n";
        return;
    }
    else if (s1 < s2)
    {
        cout << "<\n";
        return;
    }
    else
    {
        ll a = stoi(x1);
        ll b = stoi(x2);
        if (a > b)
        {
            cout << ">\n";
            return;
        }
        else if (a < b)
        {
            cout << "<\n";
            return;
        }
    }
    cout << "=\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    int lv = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            lv = i;
        }
        for (int j = 0; j < lv; j++)
        {
            if (a[i] == a[j])
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    return;
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
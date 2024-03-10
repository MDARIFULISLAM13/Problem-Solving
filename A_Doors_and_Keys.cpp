#include <bits/stdc++.h>
using namespace std;
void arif()
{

    string s;
    cin >> s;
    for (int i = 0; i < 6; i++)
    {
        if (i == 0 && s[i] < 'a')
        {
            cout << "NO\n";
            return;
        }
        if (s[i] < 'a')
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == i)
                {
                    cout << "NO\n";
                    return;
                }
                if (s[j] == (s[i]) + 32)
                {
                    break;
                }
            }
        }
    }
    cout << "YES\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}
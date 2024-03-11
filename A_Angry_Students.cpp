#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int s = 0, ans = 0, mans = 0;
    string a;
    cin >> a;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'A')
        {
            s = 1;
            ans = 0;
        }
        if (s == 1 && a[i] == 'P')
        {
            ans++;
        }
        mans = max(ans, mans);
    }
    cout << mans << endl;
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
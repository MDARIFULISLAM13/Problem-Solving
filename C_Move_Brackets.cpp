#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int neg = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            neg -= 1;
            if (neg < 0)
            {
                ans += 1;
                neg = 0;
            }
        }
        else
        {
            neg += 1;
        }
    }
    cout << ans << endl;
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
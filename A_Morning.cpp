#include <bits/stdc++.h>
using namespace std;
void arif()
{
    string s;
    cin >> s;
    string m = "1234567890";
    int sum = 4;
    int p = 0;
    for (int i = 0; i < 4; i++)
    {
        int x = m.find(s[i]);
        sum += abs(p - x);
        p = x;
    }
    cout << sum << endl;
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
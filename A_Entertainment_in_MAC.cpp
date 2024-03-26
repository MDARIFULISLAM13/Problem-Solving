#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    cout << min(s, (t + s)) << endl;
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
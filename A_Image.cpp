#include <bits/stdc++.h>
using namespace std;
void arif()
{
    string a, b;
    cin >> a >> b;
    set<char> s;
    set<char>::iterator it;
    for (int i = 0; i < 3; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        s.insert(b[i]);
    }
    cout << s.size() - 2 << endl;
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
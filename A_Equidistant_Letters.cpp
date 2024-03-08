#include <bits/stdc++.h>
using namespace std;
void arif()
{
    string a;
    cin >> a;
    vector<char> b;
    vector<char>::iterator it;
    for (int i = 0; i < a.size(); i++)
    {
        b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    for (it = b.begin(); it != b.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
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
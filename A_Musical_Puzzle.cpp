#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    vector<string> s;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        string b;
        b += a[i];
        b += a[i + 1];
        auto it = find(s.begin(), s.end(), b);
        if (it == s.end())
        {
            s.push_back(b);
            count++;
        }
    }
    cout << count << "\n";
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
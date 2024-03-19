#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "0\n";
        return;
    }
    vector<int> a;
    while (n > 0)
    {
        int x = n % 10;
        a.push_back(x);
        n /= 10;
    }
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            if (i > 0)
            {
                cout << "2\n";
            }
            else
            {
                cout << "1\n";
            }
            return;
        }
    }
    cout << "-1\n";
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
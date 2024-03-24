#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            a.push_back(7);
            n -= 3;
        }
        else
        {
            n -= 2;
            a.push_back(1);
        }
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i];
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
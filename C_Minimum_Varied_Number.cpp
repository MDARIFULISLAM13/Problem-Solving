#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    vector<int> a;
    int ans = 0;

    for (int i = 9; i >= 1; i--)
    {

        if (ans + i <= n)
        {
            ans += i;
            a.push_back(i);
        }
    }

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
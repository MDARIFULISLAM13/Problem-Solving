#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    int sum = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            sum += 1;
        }
        else
        {
            if (a[i + 1] == a[i])
            {
                sum += 2;
                i++;
            }
            else
            {
                sum -= 1;
            }
        }
    }
    if (sum == 2 && (a[0] == 1 && n == 2))
    {
        cout << "-2\n";
        return;
    }
    cout << sum << "\n";
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
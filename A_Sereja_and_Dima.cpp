#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    list<int> a;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        a.push_back(b);
    }
    int ans1 = 0, ans2 = 0;
    for (int i = 1; i <= n; i++)
    {

        int sum = 0;
        sum = max(a.back(), a.front());
        if (sum == a.back())
        {
            a.pop_back();
        }
        else
        {
            a.pop_front();
        }

        if (i % 2 == 1)
        {
            ans1 += sum;
        }
        else
        {
            ans2 += sum;
        }
    }
    cout << ans1 << " " << ans2 << endl;
}
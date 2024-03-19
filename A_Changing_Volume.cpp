#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int a, b;
    cin >> a >> b;
    int dis = abs(a - b);
    int ans = 0;
    ans += (dis / 5);
    dis -= (ans * 5);
    while (dis > 1)
    {
        dis -= 2;
        ans++;
    }
    ans += dis;
    cout << ans << endl;
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
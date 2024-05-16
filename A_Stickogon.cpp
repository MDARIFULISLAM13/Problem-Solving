/**
 *
 * Author : Md.Ariful Islam
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
void arif()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans = 0;
    int cnt = 1;
    int ck = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            cnt++;
            ck = 0;
        }
        else
        {
            ck = 1;
            ans += (cnt / 3);
            cnt = 1;
        }
    }
    if (ck == 0)
    {
        ans += (cnt / 3);
    }

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}
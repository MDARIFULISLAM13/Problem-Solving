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
    vector<int> odd;
    vector<int> even;
    for (int i = 1; i <= n + n; i++)
    {
        int v;
        cin >> v;
        if (v % 2 == 0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    int x = even.size();
    if (x % 2 != 0)
    {
        x -= 1;
    }
    int y = odd.size();
    if (y % 2 != 0)
    {
        y -= 1;
    }
    int count = 0;
    if (x >= 2)
    {
        for (int i = 0; i < x; i++)
        {
            count++;
            cout << even[i] << " " << even[i + 1] << endl;
            i++;
            if (count == n - 1)
            {
                return;
            }
        }
    }
    if (y >= 2)
    {
        for (int i = 0; i < y; i++)
        {
            count++;
            cout << odd[i] << " " << odd[i + 1] << endl;
            i++;
            if (count == n - 1)
            {
                return;
            }
        }
    }
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
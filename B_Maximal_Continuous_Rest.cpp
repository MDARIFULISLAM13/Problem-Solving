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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> a;
    int ck = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (ck == 0)
        {
            if (v == 1)
            {
                cnt++;
            }
            if (v == 0)
            {
                ck = 1;
            }
        }
        a.push_back(v);
    }
    for (int i = 1; i <= cnt; i++)
    {
        a.push_back(1);
    }
    int count = 0;
    int mx = 0;
    for (int i : a)
    {
        if (i == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        mx = max(mx, count);
    }
    cout << mx << endl;

    return 0;
}
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

    int n, m;
    cin >> n >> m;
    vector<string> a;
    vector<string> b;
    for (int i = 1; i <= m; i++)
    {
        string s, ss;
        cin >> s >> ss;
        if (s.size() > ss.size())
        {
            swap(s, ss);
        }
        a.push_back(s);
        b.push_back(ss);
    }

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        auto it = find(a.begin(), a.end(), s);
        if (it != a.end())
        {
            cout << *it << " ";
        }
        else
        {
            auto it = find(b.begin(), b.end(), s);
            int dis = distance(b.begin(), it);
            cout << a[dis] << " ";
        }
    }

    return 0;
}
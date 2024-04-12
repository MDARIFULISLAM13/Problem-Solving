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

    int m, n;
    cin >> n >> m;
    vector<string> a;
    vector<string> b;
    for (int i = 0; i < n; i++)
    {
        string s, ss;
        cin >> s >> ss;
        a.push_back(s);
        b.push_back(ss);
    }

    for (int i = 0; i < m; i++)
    {
        string s, ss;
        cin >> s >> ss;
        cout << s << " " << ss << " #";
        string n;
        for (int j = 0; j < ss.size() - 1; j++)
        {
            n += ss[j];
        }
        auto it = find(b.begin(), b.end(), n);
        int dis = distance(b.begin(), it);
        cout << a[dis] << endl;
    }
    return 0;
}
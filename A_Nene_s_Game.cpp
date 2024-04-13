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
    int n, q;
    cin >> n >> q;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        a.push_back(v);
    }
    sort(a.begin(), a.end());
    int mv = a[0] - 1;

    for (int i = 1; i <= q; i++)
    {
        int val;
        cin >> val;
        cout << min(val, mv);
        if (i != q)
        {
            cout << " ";
        }
    }
    cout << endl;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-03-2025
 * time : 13:32:48
 * Problem Name : B_Substring_and_Subsequence
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));
int ck(string a, string b, int i)
{
    int cnt = 0;
    for (int j = 0; j < a.size(); j++)
    {
        if (a[j] == b[i])
        {
            ++i;
            ++cnt;
        }
    }
    return cnt;
}
void arif()
{
    string a, b;
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    int ans = 1000;
    int cnt = 0;
    for (int i = 0; i < m; i++)
    {
        int x = ck(a, b, i);
        cnt = max(x, cnt);
    }
    cout << n+m-cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        arif();

    return 0;
}
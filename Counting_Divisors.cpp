/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-08-2024
 * time : 04:53:23
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
const int lm = 1e7 + 123;
bitset<lm> ip;
vector<int> p;
void arif(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i + i; j <= n; j += i)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;
    for (int i = 3; i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            p.push_back(i);
        }
    }
}
int solve(int v)
{
    int x = v;
    int ans = 1;
    for (int i : p)
    {
        if (1ll * i * i > x)
        {
            break;
        }
        int cnt = 1;
        while (x % i == 0)
        {
            cnt++;
            x /= i;
        }
        ans *= cnt;
    }
    if (x > 1)
    {
        ans *= 2;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arif(1e5);
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        cout << solve(v) << endl;
    }
    return 0;
}
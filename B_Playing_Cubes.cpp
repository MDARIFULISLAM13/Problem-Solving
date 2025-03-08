/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-03-2025
 * time : 02:38:43
 * Problem Name : B_Playing_Cubes
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    int a[n + m + 1];
    int b[n + m + 1];
    ll v = n + m;
    int N = min(n, m);
    int M = max(n, m);
    a[1] = 1;
    N--;
    int cnt = 0;
    int i = 2;
    while (N > 0 || M > 0)
    {
        if ((cnt < 2 && M > 0) || N == 0)
        {
            a[i] = 0;
            ++i;
            --M;
        }
        else
        {
            a[i] = 1;
            ++i;
            --N;
        }
        ++cnt;
        if (cnt == 4)
        {
            cnt = 0;
        }
    }
    N = max(n, m);
    M = min(n, m);
    b[1] = 1;
    N--;
    cnt = 0;
    i = 2;
    while (N > 0 || M > 0)
    {
        if ((cnt < 2 && M > 0) || N == 0)
        {
            b[i] = 0;
            ++i;
            --M;
        }
        else
        {
            b[i] = 1;
            ++i;
            --N;
        }
        ++cnt;
        if (cnt == 4)
        {
            cnt = 0;
        }
    }

    int cnt1 = 0, cnt2 = 0;
    int cnt11 = 0, cnt21 = 0;
    for (int i = 1; i <v; i++)
    {

        if (a[i] == a[i + 1])
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        if (b[i] == b[i + 1])
        {
            cnt11++;
        }
        else
        {
            cnt21++;
        }
    }
    if (cnt1 > cnt11)
    {
        cout << cnt1 << " " << cnt2;
    }
    else if (cnt1 == cnt11 && cnt2<cnt21){
        cout << cnt1 << " " << cnt2;
    }
     else{
         cout << cnt11 << " " << cnt21;
     }
        return 0;
}
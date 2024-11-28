/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-11-2024
 * time : 13:27:07
 * Problem Name : E_Beautiful_Array
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;
    a *= 3;
    int  x = b + b;
    cout << 3 << endl;
    cout << b << " " << b << " ";

    int d = a - x;

    cout << d;


    return 0;
}
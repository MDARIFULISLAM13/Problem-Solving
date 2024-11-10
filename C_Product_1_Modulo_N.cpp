/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-11-2024
 * time : 02:26:10
 * Problem Name : C_Product_1_Modulo_N
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
#define mem(dp,i) memset(dp,i,sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    map<int, bool>m;
    ll pd = 1;
    ll cnt = 0;
    for (int i = 1;i < t;i++) {
        if (__gcd(i, t) == 1) {
            pd = (pd * i);
            pd %= t;
            m[i] = 1;cnt++;
        }
        else {
            m[i] = 0;
        }
    }
    if (pd % t != 1) {
        m[pd % t] = 0;
        cnt--;

    }
    cout << cnt << endl;
    for (int i = 1;i < t;i++) {
        if (m[i]) {
            cout << i << " ";
        }
    }


    return 0;
}
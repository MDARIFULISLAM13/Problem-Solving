/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-09-2024
 * time : 11:35:57
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

    int t;
    cin >> t;
    int a1 = 0, a2 = 0;
    for (int i = 1;i <= t;i++) {
        int v;
        cin >> v;
        if (v == 100)a1 += 1;
        else a2 += 1;
    }
    if ((a1 + (a2 * 2)) % 2 != 0 || (a1 == 0 && a2 % 2 == 1)) {
        no;
    }
    else yes;
    return 0;
}
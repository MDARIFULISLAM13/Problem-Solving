/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-11-2024
 * time : 13:10:21
 * Problem Name : A_The_Bento_Box_Adventure
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

    int arr[6] = { 0 };
    for (int i = 1;i <= 4;i++) {
        int v;
        cin >> v;
        arr[v]++;
    }
    for (int i = 1;i <= 5;i++) {
        if (arr[i] == 0) {
            cout << i;
            return 0;
        }
    }


    return 0;
}
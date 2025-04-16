/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-04-2025
 * time : 20:38:03
 * Problem Name : A_Ideal_Generator
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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        if (n% 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
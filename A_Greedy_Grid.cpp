/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-07-2025
 * time : 20:40:08
 * Problem Name : A_Greedy_Grid
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
        ll a, b;
        cin >> a >> b;
        if(a==1 || b==1 || (a==2 && b==2)){
            no;
        }
        else{
            yes;
        }
    }

    return 0;
}
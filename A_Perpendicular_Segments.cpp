/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-10-2024
 * time : 20:40:41
 * Problem Name : A_Perpendicular_Segments
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
    while (t--) {


        int X, Y, K;
        cin >> X >> Y >> K;

        int mn = min(X, Y);


        cout << 0 << " " << 0 << " " << mn << " " << mn << endl;
        cout << 0 << " " << mn << " " << mn << " " << 0 << endl;
    }

    return 0;
}
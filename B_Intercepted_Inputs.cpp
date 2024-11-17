/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-11-2024
 * time : 20:44:16
 * Problem Name : B_Intercepted_Inputs
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
void arif() {
    int n;
    cin >> n;

    map<int, int>a;
    for (int i = 1;i <= n;i++) {
        int v;
        cin >> v;
        a[v]++;
    }
    int x = n - 2;
    for (int i = 1;i <= x;i++) {
        if (x % i == 0) {
            int s = x / i;
            if (s == i) {
                if (a[i] >= 2) {
                    cout << i << " " << i << endl;
                    return;
                }
            }
            else {
                if (a[i] >= 1 && a[s] >= 1) {
                    cout << i << " " << s << endl;
                    return;
                }
            }


        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
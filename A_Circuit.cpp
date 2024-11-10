/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-11-2024
 * time : 20:39:27
 * Problem Name : A_Circuit
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
void arif() {
    int n;
    cin >> n;
    int n0 = 0, n1 = 0;
    for (int i = 1;i <= n + n;i++) {
        int v;
        cin >> v;
        if (v == 0) {
            n0++;
        }
        else {
            n1++;
        }
    }
    int mn = 0;
    if (n1 % 2 != 0) {
        mn = 1;
    }
    int mx = min(n1, n0);
    cout << mn << " " << mx << endl;

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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-11-2024
 * time : 21:00:48
 * Problem Name : B_Medians
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
    int n, k;
    cin >> n >> k;
    if (n == 1) {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }
    if (n == k) {
        cout << "-1\n";
        return;
    }
    if (k == 1) {
        cout << "-1\n";
        return;
    }
    cout << 3 << endl;
    cout << 1 << " ";
    if (k % 2 == 0) {
        cout << k << " " << k + 1 << endl;
    }
    else {
        cout << k - 1 << " " << k + 2 << endl;
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
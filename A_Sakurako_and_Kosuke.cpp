/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-10-2024
 * time : 20:37:59
 * Problem Name : A_Sakurako_and_Kosuke
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
    if (n % 2 == 0) {
        cout << "Sakurako\n";
    }
    else {
        cout << "Kosuke\n";
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
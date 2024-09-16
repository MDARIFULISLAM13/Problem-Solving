/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-09-2024
 * time : 19:56:47
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
void arif() {
    ll w, h;
    cin >> w >> h;
    ll Ans_w = ((w + 2) / 3);

    ll Ans_h = ((h + 2) / 3);

    cout << Ans_w * Ans_h << endl;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 10-11-2024
 * time : 21:38:14
 * Problem Name : A_Alice_s_Adventures_in_Chess
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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int x = 0, y = 0;
    for (int i = 1;i <= 100;i++) {

        for (char move : s) {
            if (move == 'N') y++;
            if (move == 'S') y--;
            if (move == 'E') x++;
            if (move == 'W') x--;

            if (x == a && y == b) {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";

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
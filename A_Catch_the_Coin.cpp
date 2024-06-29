/**
 *
 * Author : Md.Ariful Islam
 * Date : 27-06-2024
 * time : 20:41:41
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
    int x, y;
    cin >> x >> y;
    if (y > x) {
        cout << "YES\n";
        return;
    }
    if (x <= (y + (abs(x) - abs(y)))) {
        cout << "YES\n";
        return;
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
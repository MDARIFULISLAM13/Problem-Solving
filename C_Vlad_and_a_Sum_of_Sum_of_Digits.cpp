/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-06-2024
 * time : 00:50:54
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
ll mx = 0;
void arif() {

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    vec a(t);
    for (auto& i : a) {
        cin >> i;
        mx = max(mx, i);

    }
    vec v(mx + 1);

    for (int i = 1;i <= mx;i++) {
        int x = i;
        int y = 0;
        while (x > 0) {
            y += x % 10;
            x /= 10;
        }
        v[i] = v[i - 1] + y;
    }
    for (int i : a) {
        cout << v[i] << endl;
    }


    return 0;
}
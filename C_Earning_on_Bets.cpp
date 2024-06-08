/**
 *
 * Author : Md.Ariful Islam
 * Date : 07-06-2024
 * time : 00:19:54
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
    int n;
    cin >> n;
    vec a(n);
    for (auto& i : a) {
        cin >> i;
    }

    int x = 1;
    for (int i : a) {
        int y = __gcd(x, i);
        y = i / y;
        x *= y;
    }

    vec ans;
    ll sum = 0;
    for (auto& i : a) {
        int y = x / i;
        sum += y;
        ans.push_back(y);
    }
    if (sum >= x) {
        cout << -1 << endl;
    }
    else {
        for (int i : ans) {
            cout << i << " ";
        }
        cout << endl;
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
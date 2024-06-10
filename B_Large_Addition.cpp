/**
 *
 * Author : Md.Ariful Islam
 * Date : 09-06-2024
 * time : 21:15:51
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
    ll num;
    cin >> num;
    string a = to_string(num);
    int l = a.size();
    if (a[0] != '1' || a[l - 1] == '9') {
        cout << "NO\n";
        return;
    }
    for (int i = 0;i < l - 1;i++) {
        if (a[i] == '0') {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";

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

/**
 *
 * Author : Md.Ariful Islam
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vec a(n);
    int c5 = 0, c0 = 0;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        if (a[i] == 0) {
            c0++;
        }
        else {
            c5++;
        }
    }
    if (c0 == 0) {
        cout << "-1\n";
        return 0;
    }
    if (c5 < 9) {
        cout << "0\n";
        return 0;

    }
    int mx5 = (c5 / 9) * 9;
    for (int i = 0;i < mx5;i++) {
        cout << "5";
    }
    for (int i = 0;i < c0;i++) {
        cout << "0";
    }


    return 0;
}
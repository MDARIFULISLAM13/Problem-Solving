/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-06-2024
 * time : 12:49:57
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

    ll n;
    cin >> n;
    vec a(n);
    for (auto& i : a) {
        cin >> i;
    }
    vec b(a.begin(), a.end());
    sort(a.begin(), a.end());
    int fv = a[0], sv = a[0];
    int ck = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] != b[i]) {
            ck++;
            if (ck == 1) {
                fv = a[i];
            }
            else if (ck == 2) {
                sv = a[i];
            }
            else if (ck > 2) {
                cout << "no\n";
                return 0;
            }
        }
    }
    cout << "yes\n";
    cout << "1 1" << endl;

    return 0;
}
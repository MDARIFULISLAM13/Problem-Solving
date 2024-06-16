/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-06-2024
 * time : 13:31:23
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

    ll n, k;
    cin >> n >> k;
    vec a(n);
    int ck = 0;
    for (auto& i : a) {
        cin >> i;
        if (i % 2 != 0) {
            ck = 1;
        }
    }

    sort(a.begin(), a.end());
    vec v(a.begin() + n / 2, a.end());
    ll sum = k;
    for (int i : v) {
        sum += i;
    }
    cout << sum / v.size();
    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * time : 21:50:06
 * Problem Name : B_Binomial_Coefficients_Kind_Of
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
int solve(int b, int v) {
    int result = 1;
    ll mod = 1e9 + 7;
    while (v > 0) {
        if (v % 2 == 1) {
            result = (1LL * result * b) % mod;
        }

        b = (1LL * b * b) % mod;
        v /= 2;
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    vec n(t);
    vec k(t);



    for (int i = 0; i < t; ++i) {
        cin >> n[i];
    }

    for (int i = 0; i < t; ++i) {
        cin >> k[i];
    }

    for (int i = 0; i < t; ++i) {
        cout << solve(2, k[i]) << endl;
    }

    return 0;
}
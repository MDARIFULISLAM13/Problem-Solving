/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-10-2024
 * time : 02:39:51
 * Problem Name : C_Sum_of_Cubes
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
    ll n;
    cin >> n;


    for (int i = 1; i <= pow(n, 1.0 / 3); i++) {
        ll N = n - pow(i, 3.0);
        auto a = pow(N, 1.0 / 3);

        if (fabs(a - round(a)) < 1e-9 && N != 0) {
            cout << "YES\n";
            return;
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
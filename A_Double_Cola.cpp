/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-06-2024
 * time : 10:56:44
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
    int x = 5;
    while (n > x) {
        n -= x;
        x *= 2;
    }
    ll val = x / 5;
    vector<string>a{ "Sheldon", "Leonard", "Penny", "Rajesh", "Howard" };

    for (int i = 0;i < 5;i++) {
        if (n <= val) {
            cout << a[i] << endl;
            return 0;
        }
        n -= val;
    }

    return 0;
}
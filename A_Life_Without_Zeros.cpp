/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-06-2024
 * time : 12:44:17
 *
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
    string a, b;
    cin >> a >> b;

    ll a1 = stoi(a);
    ll a2 = stoi(b);
    ll ans1 = a1 + a2;
    string c = to_string(ans1);
    string new_a = "";
    for (int i = 0;i < a.size();i++) {
        if (a[i] != '0') {
            new_a += a[i];
        }
    }
    string new_b = "";
    for (int i = 0;i < b.size();i++) {
        if (b[i] != '0') {
            new_b += b[i];
        }
    }
    string new_c = "";
    for (int i = 0;i < c.size();i++) {
        if (c[i] != '0') {
            new_c += c[i];
        }
    }
    ll cc = stoi(new_c);
    ll aa = stoi(new_a);
    ll bb = stoi(new_b);
    if (aa + bb == cc) {
        cout << "YES\n";

    }
    else {
        cout << "NO\n";
    };






    return 0;
}
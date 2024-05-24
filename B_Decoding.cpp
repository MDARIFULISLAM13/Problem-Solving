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

    int t;
    cin >> t;
    string s;
    cin >> s;
    string a = "";
    string b = "";
    for (int i = 0;i < t;i++) {
        if (i % 2 == 0) {
            a += s[i];
        }
        else {
            b += s[i];
        }
    }
    if (t % 2 == 0) {
        reverse(a.begin(), a.end());
    }
    else {
        reverse(b.begin(), b.end());
    }
    if (t % 2 == 0)
        cout << a << b;
    else
        cout << b << a;


    return 0;
}
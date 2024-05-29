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

    string s, t;
    cin >> s >> t;
    ll sum = s.size() + t.size();
    int a = s.size() - 1;
    int b = t.size() - 1;
    char c = s[a], cc = t[b];
    while (1) {
        if (c != cc) {
            break;

        }



        sum -= 2;
        if (a == 0 && b == 0) {
            break;
        }
        a--;
        b--;
        c = s[a], cc = t[b];
    }

    cout << sum;

    return 0;
}
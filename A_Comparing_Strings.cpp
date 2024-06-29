/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-06-2024
 * time : 11:27:14
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

    if (a.size() != b.size()) {
        cout << "NO\n";
        return 0;

    }
    if (a.compare(b) == 0) {
        cout << "YES\n";
        return 0;
    }
    char c, cc;
    int ck = 0;
    for (int i = 0;i < a.size();i++) {
        if (a[i] != b[i]) {
            ck++;
            if (ck == 1) {
                c = a[i];
                cc = b[i];
            }
            else if (ck == 2) {
                if (a[i] != cc || b[i] != c) {
                    cout << "NO\n";
                    return 0;
                }
            }
            else if (ck > 2) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    if (ck == 1) {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";


    return 0;
}
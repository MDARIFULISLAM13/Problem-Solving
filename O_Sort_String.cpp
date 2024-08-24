/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-08-2024
 * time : 22:20:42
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

    int a;
    cin >> a;
    vector<int>v(27, 0);
    char c;
    for (int i = 0;i < a;i++) {
        cin >> c;
        v[c - 96]++;
    }
    for (int i = 0;i < 27;i++) {
        for (int j = 0;j < v[i];j++) {
            char c = 96 + i;
            cout << c;
        }
    }
    return 0;
}
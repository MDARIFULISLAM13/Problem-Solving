/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * time : 18:42:53
 * Problem Name : B_Little_Girl_and_Game
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

    string s;
    cin >> s;
    map<char, int> c;
    int mn = INT_MAX;
    for (int i = 0; i < s.size(); i++) {
        char x = s[i];


        if (c.find(x) != c.end()) {
            int v = c[x];

            mn = min(mn, abs((i + 1) - v));
            c[x] = i + 1;

        }
        else {
            c[x] = i + 1;
        }



    }

    if (mn % 2 != 0) {
        cout << "Second\n";
    }
    else {
        cout << "First\n";
    }

    return 0;
}
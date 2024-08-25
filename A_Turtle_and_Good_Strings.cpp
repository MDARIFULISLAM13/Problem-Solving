/**
 *
 * Author : Md.Ariful Islam
 * Date : 25-08-2024
 * time : 20:39:27
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

    while (t--) {
        int n;
        string s;

        cin >> n >> s;


        if (s[0] == s[n - 1]) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }


    return 0;
}
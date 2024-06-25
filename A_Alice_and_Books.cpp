/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-06-2024
 * time : 21:00:38
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
        cin >> n;
        int mx = 0;
        for (int i = 1;i < n;i++) {
            int v;
            cin >> v;
            if (v > mx) {
                mx = v;
            }
        }
        int x;
        cin >> x;
        cout << mx + x << endl;




    }
    return 0;
}
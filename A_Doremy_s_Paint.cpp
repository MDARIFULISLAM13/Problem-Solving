/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-06-2024
 * time : 12:14:27
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
        vec a(n);
        for (auto& i : a) {
            cin >> i;
        }
        cout << 1 << " " << n << endl;
    }

    return 0;
}
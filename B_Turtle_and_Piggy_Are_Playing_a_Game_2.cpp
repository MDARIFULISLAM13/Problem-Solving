/**
 *
 * Author : Md.Ariful Islam
 * Date : 25-08-2024
 * time : 20:50:15
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
        vector<int>a(n);
        for (int i = 0;i < n;i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        n -= 1;
        int x = 0;
        if (n % 2 == 0) {
            x = n / 2;
        }
        else {
            x = n / 2;
            x += 1;
        }
        cout << a[x] << endl;

    }

    return 0;
}
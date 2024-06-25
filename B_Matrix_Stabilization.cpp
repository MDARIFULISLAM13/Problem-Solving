/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-06-2024
 * time : 21:36:21
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
void arif() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>>a(n, vector<int>(m));
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int top = (i > 0) ? a[i - 1][j] : 0;
            int left = (j > 0) ? a[i][j - 1] : 0;
            int bottom = (i < n - 1) ? a[i + 1][j] : 0;
            int right = (j < m - 1) ? a[i][j + 1] : 0;

            int mx = max({ top, left, bottom, right });
            if (a[i][j] > mx) {
                a[i][j] = mx;

            }
        }
    }


    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}







int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
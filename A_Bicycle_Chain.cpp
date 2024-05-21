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

    int n;
    cin >> n;

    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int m;
    cin >> m;

    vector<int>b(m);;
    for (int i = 0;i < m;i++) {
        cin >> b[i];

    }

    int mx = 0;
    int mxc = 0;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {

            if (b[j] % a[i] == 0) {
                int diff = b[j] / a[i];

                if (diff == mx) {
                    mxc++;

                }
                else if (diff > mx) {
                    mx = diff;
                    mxc = 1;
                }
            }
        }
    }

    cout << mxc;
    return 0;
}
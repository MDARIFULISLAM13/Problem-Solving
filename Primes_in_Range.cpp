/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-09-2024
 * time : 21:31:39
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
int mx = 1000000 + 123;
vector<int>m(mx, 0);
vector<int>p(mx, 0);
void arif() {
    for (int i = 3;i <= mx;i += 2) {
        m[i] = 1;
    }
    for (int i = 3;i <= mx;i += 2) {
        if (m[i] != 0) {
            for (int j = i + i;j <= mx;j += i) {
                m[j] = 0;
            }
        }
    }
    m[2] = 1;
    for (int i = 1;i <= mx;i++) {
        if (m[i] == 0) {
            p[i] = p[i - 1];
        }
        else {
            p[i] = p[i - 1] + 1;
        }

    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    arif();
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << p[m] - p[n - 1] << endl;
    }

    return 0;
}
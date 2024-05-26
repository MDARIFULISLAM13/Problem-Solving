

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
void arif() {
    int n;
    cin >> n;
    vec a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int cnt = 0;
    vec b;
    b.push_back(a[0]);

    for (int i = 1;i < n;i++) {
        if (a[i] < a[i - 1]) {
            cnt++;
            sort(b.begin(), b.end());

        }
        else if (cnt == 0) {
            b.push_back(a[i]);
        };
        if (cnt != 0) {
            if (cnt == 2) {
                cout << "No\n";
                return;
            }
            else if (a[i] > b[0]) {
                cout << "No\n";
                return;
            }
        }

    }


    cout << "Yes\n";

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
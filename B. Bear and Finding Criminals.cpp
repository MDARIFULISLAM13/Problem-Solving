/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-06-2024
 * time : 14:08:39
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

    int a, n;
    cin >> a >> n;
    vec v(a);
    int t_1 = 0;
    for (int i = 0;i < a;i++) {
        cin >> v[i];
        if (v[i] == 1) {
            t_1++;
        }
    }
    if (t_1 == 0) {
        cout << "0";
        return 0;
    }
    if (t_1 == 1) {
        cout << "1";
        return 0;
    }
    int ans = 0;
    n -= 1;
    if (v[n] == 1) {
        ans++;
    }
    for (int i = n + 1;i < a;i++) {

        if (v[i] == 1) {
            int k = abs(n - i);
            if (v[n - k] == 1) {
                ans += 2;
            }
        }

    }


    cout << ans << endl;


    return 0;
}
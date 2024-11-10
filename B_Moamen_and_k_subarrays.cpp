/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-10-2024
 * time : 10:07:28
 * Problem Name : B_Moamen_and_k_subarrays
 *
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
    ll n;
    cin >> n;
    ll k;
    cin >> k;
    vector<pair<int, int>>a;
    for (int i = 0;i < n;i++) {
        int v;
        cin >> v;
        a.push_back({ v,i });
    }
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0;i < n;i++) {
        if (a[i - 1].second + 1 != a[i].second) {
            ans++;
        }
    }
    if (ans > k) {
        cout << "No\n";
    }
    else {
        cout << "Yes\n";
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)arif();

    return 0;
}
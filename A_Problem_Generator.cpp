/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 20:40:10
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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    ll ans = 0;
    vec a(7, 0);
    for (int i = 0;i < s.size();i++) {
        int x = s[i] - 'A';
        a[x]++;
    }
    for (int i : a) {
        if (i < m) {
            ans += (abs(m - i));
        }
    }
    cout << ans << endl;

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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 14:29:31
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
    string s;
    cin >> s;
    ll a;
    cin >> a;
    ll b = 0;
    string ss = s;
    sort(s.begin(), s.end());
    vec v(26, 0);
    for (int i = 0;i < s.size();i++) {
        int x = s[i] - 96;
        if (b + x > a) {
            break;
        }

        b += x;
        v[x - 1]++;

    }
    for (int i = 0;i < ss.size();i++) {
        int x = ss[i] - 'a';
        if (v[x] > 0) {
            cout << ss[i];
            v[x]--;
        }
    }
    cout << endl;



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
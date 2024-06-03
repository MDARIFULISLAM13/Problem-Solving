/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 12:11:35
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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int>c(26, 0);
    vector<int>sm(26, 0);
    for (int i = 0;i < n;i++) {
        if ('A' <= s[i] && s[i] <= 'Z') {
            c[s[i] - 'A']++;
        }
        else {
            sm[s[i] - 'a']++;
        }
    }
    ll ans = 0;
    for (int i = 0;i < 26;i++) {
        int sum = min(c[i], sm[i]);
        c[i] -= sum;
        sm[i] -= sum;
        ans += sum;
    }

    ll new_pair = 0;
    for (int i = 0;i < 26;i++) {
        new_pair += ((c[i] / 2) + (sm[i] / 2));
    }
    ans += min(new_pair, k);
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
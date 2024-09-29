/**
 *
 * Author : Md.Ariful Islam
 * Date : 26-09-2024
 * time : 04:19:41
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

void generateLuckyNumbers(ll current, ll l, ll n, std::vector<ll>& luckyNumbers) {
    if (current > n) {
        return;
    }


    if (current >= l) {
        luckyNumbers.push_back(current);
    }

    // Generate next numbers by appending 4 and 7
    generateLuckyNumbers(current * 10 + 4, l, n, luckyNumbers);
    generateLuckyNumbers(current * 10 + 7, l, n, luckyNumbers);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<ll> luckyNumbers;
    ll l, r;
    cin >> l >> r;
    generateLuckyNumbers(0, l, 1e9, luckyNumbers);
    luckyNumbers.push_back(4444444444);
    sort(luckyNumbers.begin(), luckyNumbers.end());

    ll ans = 0;
    ll v = 0;
    for (ll i = l;i <= r;) {
        ll dis;
        if (luckyNumbers[v] <= r) {
            dis = luckyNumbers[v] + 1 - i;
        }
        else {
            dis = r + 1 - i;
        }



        ans += (dis * luckyNumbers[v]);
        i = luckyNumbers[v] + 1;
        v++;


    }
    cout << ans << endl;

    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-11-2024
 * time : 20:02:58
 * Problem Name : B_Chemistry
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
void arif() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    if (s[0] == s[n - 1]) {
        cout << "YES\n";
        return;
    }
    int e = 0, o = 0;
    for (int i = 1;i < n;i++) {

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
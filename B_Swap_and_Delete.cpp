/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-06-2024
 * time : 11:01:11
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
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0;i < s.size();i++) {
        if (s[i] == '0') {
            cnt0++;
        }
        else {
            cnt1++;
        }
    }
    for (int i = 0;i < s.size();i++) {
        if (s[i] == '0') {
            if (cnt1 == 0) {
                break;
            }
            cnt1--;
        }
        else {
            if (cnt0 == 0) {
                break;
            }
            cnt0--;
        }
    }
    cout << cnt0 + cnt1 << endl;



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
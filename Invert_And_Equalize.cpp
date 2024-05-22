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
    string s;
    cin >> s;
    int c1 = 0, c0 = 0;
    for (int i = 0;i < n;i++) {

        if (s[i] == '1') {
            c1++;
            while (1) {
                if (s[i + 1] == '1') {
                    i++;
                }
                else {
                    break;
                }
            }
        }
        if (s[i] == '0') {
            c0++;
            while (1) {
                if (s[i + 1] == '0') {
                    i++;
                }
                else {
                    break;
                }
            }
        }

    }
    cout << min(c1, c0) << endl;
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
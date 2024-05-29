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
    int mxs = 1;
    int ss = 1;
    char p = s[0];
    for (int i = 1;i < n;i++) {

        if (s[i] == p) {
            ss++;
            mxs = max(ss, mxs);
        }
        else {
            p = s[i];
            mxs = max(ss, mxs);
            ss = 1;
        }
    }
    cout << mxs + 1 << endl;
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
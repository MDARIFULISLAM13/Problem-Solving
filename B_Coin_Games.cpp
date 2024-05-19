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

    int count = 0;
    for (int i = 0;i < n;i++) {
        if (s[i] == 'U') {
            count++;
        }
    }
    if (count % 2 == 0) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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
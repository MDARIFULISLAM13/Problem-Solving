/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 11:44:57
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
    for (int i = 1;i <= m;i++) {
        if (i == 1) {
            cout << "W";
        }
        else {
            cout << "B";
        }

    }
    cout << endl;
    for (int i = 1;i < n;i++) {
        for (int i = 1;i <= m;i++) {
            cout << "B";
        }
        cout << endl;

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
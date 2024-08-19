/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-08-2024
 * time : 20:48:05
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
    vec a(n);
    vec b(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {
        cin >> b[i];
    }
    int al = 0, ar = n - 1, bl = 0, br = n - 1;
    while (ar > al) {
        if (a[al] != b[bl] && a[al] != b[br]) {

            cout << "Alice\n";
            return;
        }
        else if (a[ar] != b[bl] && a[ar] != b[br]) {
            cout << "Alice\n";
            return;
        }
        else if (a[al] == b[bl]) {
            bl++;al++;

        }
        else if (a[al] == b[br]) {
            al++;br--;

        }
        else if (a[ar] == b[bl]) {
            bl++;
            ar--;
        }
        else {
            ar--;
            br--;
        }
    }
    cout << "Bob\n";
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
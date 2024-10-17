/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-10-2024
 * time : 18:56:58
 * Problem Name : B_Not_Dividing
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
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {
        if (a[i] == 1) {
            a[i]++;
        }
    }

    for (int i = 1;i < n;i++) {
        if (a[i] % a[i - 1] == 0) {
            a[i]++;
        }
    }
    for (auto i : a) {
        cout << i << " ";
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
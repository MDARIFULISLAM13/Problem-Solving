/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-07-2024
 * time : 21:39:27
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

    int n, k;
    cin >> n >> k;

    vector<string>a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;) {
        string s = a[i];
        for (int j = 0;j < n;) {
            cout << s[j];
            j += k;
        }
        i += k;
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

    while (t--)arif();

    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 01-06-2024
 * time : 11:49:13
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
    for (int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a.size() == 1) {
        cout << a[0] << endl;
    }
    else if (a.size() == 2) {
        if (a[0] > -1) {
            cout << a[0] << endl;
        }
        else {
            cout << a[1] - a[0] << endl;
        }
    }
    else {
        reverse(a.begin(), a.end());
        cout << a[1] - a[2] << endl;

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
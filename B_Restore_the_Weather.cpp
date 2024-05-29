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
    int n, k;
    cin >> n >> k;
    vec a(n);
    vec b(n);
    for (int i = 0;i < n;i++)cin >> a[i];
    for (int i = 0;i < n;i++) cin >> b[i];
    vec c(a.begin(), a.end());
    sort(c.begin(), c.end());
    sort(b.begin(), b.end());
    for (int i = 0;i < n;i++) {
        auto it = find(c.begin(), c.end(), a[i]);
        int j = distance(c.begin(), it);

        cout << b[j] << " ";
        c.erase(c.begin() + j);
        b.erase(b.begin() + j);


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
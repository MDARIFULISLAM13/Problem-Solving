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
#define sort(a) sort(a.begin(),a.end());
#define rev(a) reverse(a.begin(),a.end());
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
int mnf(int n, vec a) {
    sort(a);
    int ans = 0;
    while (n > 0) {
        if (a[0] <= 0) {
            a.erase(a.begin());
        }
        ans += a[0];
        a[0] -= 1;

        sort(a);
        n -= 1;
    }
    return ans;

}
int mxf(int n, vec a) {
    sort(a);
    int ans = 0;
    while (n > 0) {
        ans += a[a.size() - 1];
        a[a.size() - 1] -= 1;
        sort(a);
        n -= 1;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vec a(m);
    for (int i = 0;i < m;i++)cin >> a[i];



    int mn = mnf(n, a);
    int mx = mxf(n, a);
    cout << mx << " " << mn;


    return 0;
}
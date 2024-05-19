
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
    vector<int>a;
    vector<int>b;
    for (int i = 0;i < n;i++) {
        int v;
        cin >> v;
        a.push_back(v);
    }
    for (int i = 0;i < n;i++) {
        int v;
        cin >> v;
        b.push_back(v);
    }
    int count = 0;
    for (int i = 0;i < n;i++) {
        if (a[i] > b[i]) {
            count++;
            a.insert(a.begin(), b[i]);
        }
    }
    cout << count << endl;
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
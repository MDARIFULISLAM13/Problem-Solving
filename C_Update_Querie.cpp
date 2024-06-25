/**
 *
 * Author : Md.Ariful Islam
 * Date : 23-06-2024
 * time : 21:59:09
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
    string s;
    cin >> s;
    vec a(m);
    for (auto& i : a) {
        cin >> i;
    }
    string c;
    cin >> c;
    a.erase(unique(a.begin(), a.end()), a.end());
    sort(c.begin(), c.end());
    map<int, char> nw;
    for (int i = 0; i < a.size(); i++) {
        nw[a[i]] = c[i];
    }
    for (const auto& pair : nw) {
        s[pair.first - 1] = pair.second;
    }


    cout << s << endl;

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
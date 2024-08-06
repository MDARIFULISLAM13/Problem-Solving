/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-07-2024
 * time : 00:33:27
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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    while (q--) {
        int l, r;
        cin >> l >> r;
        string na, nb;


        sort(na.begin(), na.end());
        sort(nb.begin(), nb.end());
        int ck = 0;
        for (int i = 0;i < na.size();i++) {
            char ch = na[i];
            for (int j = 0;j < nb.size();j++) {
                if (ch == nb[j]) {
                    nb.erase(j, 1);
                    break;
                }
                if (j == nb.size() - 1) {
                    ck++;
                    break;
                }
                if (int(ch) < int(nb[j])) {
                    ck++;
                    break;
                }

            }

        }
        cout << ck << endl;


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
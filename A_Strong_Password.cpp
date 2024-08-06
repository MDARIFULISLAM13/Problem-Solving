/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-07-2024
 * time : 20:37:23
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
    string s;
    cin >> s;
    for (int i = 0;i < s.size();i++) {
        if (s[i] == s[i + 1] && (i + 1) != s.size()) {

            for (int j = 0;j <= i;j++) {
                cout << s[j];
            }
            if (s[i] == 'a') {
                cout << "b";
            }
            else {
                cout << "a";
            }
            for (int j = i + 1;j < s.size();j++) {
                cout << s[j];
            }
            cout << endl;
            return;
        }
    }
    if (s[0] != 'a' && s[1] != 'a') {
        cout << "a";
    }
    else if (s[0] != 'c' && s[1] != 'c') {
        cout << "c";
    }
    else {
        cout << "b";
    }
    cout << s;

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
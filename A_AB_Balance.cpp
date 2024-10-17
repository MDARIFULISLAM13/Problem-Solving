/**
 *
 * Author : Md.Ariful Islam
 * Date : 17-10-2024
 * time : 19:28:07
 * Problem Name : A_AB_Balance
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

    int a = 0, b = 0, ab = 0;
    for (int i = 0;i < s.size() - 1;i++) {
        if (s[i] == 'a' && s[i + 1] == 'b') {
            a++;
        }
        else if (s[i] == 'b' && s[i + 1] == 'a') {
            b++;
        }
    }
    if (a == b) {
        cout << s << endl;
        return;
    }
    else {
        if (a > b) {
            for (int i = 0;i < s.size() - 1;i++) {
                if (a == b) {
                    break;
                }
                if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] != 'a') {
                    b += 1;
                    s[i + 1] = 'a';
                }
                if (a == b) {
                    break;
                }
                if (s[i] == 'a' && s[i + 1] == 'a' && s[i + 2] != 'b') {
                    b += 1;
                    s[i] = 'b';
                }
            }
        }
        if (a < b) {
            for (int i = 0;i < s.size() - 1;i++) {
                if (a == b) {
                    break;
                }
                if (s[i] == 'b' && s[i + 1] == 'a' && s[i + 2] != 'b') {
                    a += 1;
                    s[i + 1] = 'b';
                }
                if (a == b) {
                    break;
                }
                if (s[i] == 'b' && s[i + 1] == 'b' && s[i + 2] != 'a') {
                    a += 1;
                    s[i] = 'a';
                }
            }
        }

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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-06-2024
 * time : 14:22:50
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    char c, cc;
    int a;
    cin >> a;
    vector<string>s(a);
    vec v(26);
    for (int i = 0;i < a;i++) {
        cin >> s[i];
        for (int j = 0;j < a;j++) {
            string b = s[i];
            if (i == 0) {
                c = b[0];
            }
            if (i == 1) {
                cc = b[0];
            }
            int x = b[j] - 97;
            v[x]++;
        }

    }

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int cnt = 0;
    for (int i = 0;i < 26;i++) {
        if (v[i] != 0) {
            cnt++;

        }
        else {
            break;
        }
    }
    if (cnt != 2) {
        no;
        return 0;
    }


    int p = 0, pp = a - 1;
    int ck = 0;
    for (int i = 0;i < a;i++) {
        string b = s[i];
        for (int j = 0;j < a;j++) {
            if (b[p] != c || b[pp] != c) {
                no;
                return 0;
            }
            else if (j != p && j != pp) {
                if (b[j] != cc) {
                    no;
                    return 0;
                }
            }

        }

        if (p == ((a / 2))) {
            ck = 1;
        }
        if (ck == 1) {
            p -= 1;
            pp += 1;
        }
        else {
            p += 1;
            pp -= 1;
        }


    }
    cout << "YES\n";


    return 0;
}
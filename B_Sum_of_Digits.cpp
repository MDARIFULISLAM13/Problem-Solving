/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 12:36:11
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

    string s;
    cin >> s;
    if (s.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    else {
        int cnt = 1;
        int number = 0;
        for (int i = 0;i < s.size();i++) {
            number += (s[i] - '0');
        }
        while (1) {
            if (number < 10) {
                break;
            }

            string a = to_string(number);
            number = 0;
            for (int i = 0;i < a.size();i++) {
                number += (a[i] - '0');
            }



            cnt++;

        }
        cout << cnt;

    }

    return 0;
}
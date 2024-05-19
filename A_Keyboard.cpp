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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    cin >> c;
    string ss;
    cin >> ss;
    if (c == 'R') {

        for (int i = 0;i < ss.size();i++) {

            auto it = s.find(ss[i]);
            it--;
            int j = it;
            cout << s[j];


        }
    }
    else {
        for (int i = 0;i < ss.size();i++) {

            auto it = s.find(ss[i]);
            it++;
            int j = it;
            cout << s[j];


        }

    }


    return 0;
}
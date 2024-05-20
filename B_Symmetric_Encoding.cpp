
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
string decode(const string& b) {
    set<char> distinct_chars(b.begin(), b.end());
    vector<char> r(distinct_chars.begin(), distinct_chars.end());

    unordered_map<char, char> char_map;
    int length = r.size();
    for (int i = 0; i < length; ++i) {
        char_map[r[i]] = r[length - 1 - i];
    }

    string s;
    for (char c : b) {
        s += char_map[c];
    }

    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        cout << decode(b) << endl;
    }



    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 25-08-2024
 * time : 21:15:55
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

string reorder_string(const string& s) {
    unordered_map<char, int> freq;
    for (char ch : s) {
        freq[ch]++;
    }


    vector<pair<char, int>> sorted_chars(freq.begin(), freq.end());
    sort(sorted_chars.begin(), sorted_chars.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second || (a.second == b.second && a.first < b.first);
        });

    string result;
    for (const auto& p : sorted_chars) {
        result += string(p.second, p.first);
    }

    return result;
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
        string s;
        cin >> n >> s;

        cout << reorder_string(s) << '\n';
    }

    return 0;
}



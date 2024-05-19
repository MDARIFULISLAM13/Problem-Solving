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

    int n, s;
    cin >> n >> s;
    int f, tt;
    vector<pair<int, int>>a;
    int count = 0;
    for (int i = 1;i <= n;i++) {

        cin >> f >> tt;
        a.push_back(make_pair(f, tt));

    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for (int i = 0;i < n;i++) {

        count += (s - a[i].first);
        s = a[i].first;
        if (count < a[i].second) {
            count = a[i].second;
        }

    }
    count += s;
    cout << count;

    return 0;
}
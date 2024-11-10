/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-10-2024
 * time : 09:52:26
 * Problem Name : B_Before_an_Exam
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

    int n, sum;
    cin >> n >> sum;
    ll mx = 0, mn = 0;
    vector<pair<int, int>>a;
    for (int i = 0;i < n;i++) {
        int u, v;
        cin >> u >> v;
        a.push_back({ u,v });
        mn += u;
        mx += v;

    }
    if (mn > sum || mx < sum) {
        cout << "NO\n";
        return 0;
    }
    ll ex = sum - mn;
    cout << "YES\n";
    for (int i = 0;i < n;i++) {
        if (ex > 0) {
            ll v = (a[i].second - a[i].first);
            if (v < ex) {
                ex -= v;
                cout << a[i].first + v << " ";
            }
            else {
                cout << a[i].first + ex << " ";
                ex = 0;
            }
        }
        else {
            cout << a[i].first << " ";
        }
    }

    return 0;
}
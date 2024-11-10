/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-10-2024
 * time : 20:58:05
 * Problem Name : D_Kousuke_s_Assignment
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
#define mem(dp,i) memset(dp,i,sizeof(dp));
int arif() {
    int n;
    cin >> n;

    vec a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    unordered_map<ll, int> prefix_map;
    ll prefix_sum = 0;
    int count_segments = 0;
    int last_split = -1;

    prefix_map[0] = -1;

    for (int i = 0; i < n; ++i) {
        prefix_sum += a[i];

        if (prefix_map.find(prefix_sum) != prefix_map.end()) {
            if (prefix_map[prefix_sum] >= last_split) {
                ++count_segments;
                last_split = i;
            }
        }
        prefix_map[prefix_sum] = i;
    }
    return  count_segments;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {

        cout << arif() << endl;

    }

    return 0;
}





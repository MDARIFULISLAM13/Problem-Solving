/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-09-2024
 * time : 12:37:28
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
    int t;
    cin >> t;
    vector<int>a(8, 0);
    for (int i = 1;i <= t;i++) {
        int v;
        cin >> v;
        a[v]++;
    }
    if (a[7] != 0) {
        cout << -1;
        return 0;
    }
    vector<int>ans;
    int cnt = 0;
    while (a[1] != 0) {

        ans.push_back(1);
        a[1]--;
        cnt++;
        if (a[2] != 0) {
            ans.push_back(2);
            a[2]--;
            cnt++;
            if (a[4] != 0) {
                ans.push_back(4);
                a[4]--;
                cnt++;
            }
            else if (a[6] != 0) {
                ans.push_back(6);
                a[6]--;
                cnt++;
            }
            else {
                cout << -1;
                return 0;
            }

        }
        else if (a[3] != 0) {
            ans.push_back(3);
            a[3]--;
            cnt++;
            if (a[6] != 0) {
                ans.push_back(6);
                a[6]--;
                cnt++;
            }
            else {
                cout << -1;
                return 0;
            }
        }
        else {
            cout << -1;
            return 0;
        }

    }
    if (cnt != t) {
        cout << -1;
        return 0;
    }
    cnt = 0;
    for (int i = 0;i < t;i++) {
        cout << ans[i];
        cnt++;
        if (cnt % 3 == 0) {
            cout << endl;
        }
        else {
            cout << " ";
        }

    }

    return 0;
}
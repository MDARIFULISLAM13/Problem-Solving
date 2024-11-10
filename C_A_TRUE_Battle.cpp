/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-10-2024
 * time : 20:52:07
 * Problem Name : C_A_TRUE_Battle
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
void solve(int i, int n, vector<int>& nums, bool ans, bool turn, bool& res) {
    if (i == n) {
        if (ans == 1) {
            res = ans;
            return;
        }
    }

    if (turn) {
        solve(i + 1, n, nums, ans & ((bool)nums[i]), !turn, res);
        solve(i + 1, n, nums, ans | ((bool)nums[i]), !turn, res);
    }
    else {
        solve(i + 1, n, nums, ans & ((bool)nums[i]), !turn, res);
        solve(i + 1, n, nums, ans | ((bool)nums[i]), !turn, res);
    }
}
void arif() {
    int n;

    cin >> n;

    string str;

    cin >> str;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            nums[i] = 0;
        }
        else {
            nums[i] = 1;
        }
    }

    bool ans = nums[0];
    bool turn = 0, choice = 0, res = 0;

    solve(1, n, nums, ans, turn, res);

    if (res) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
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
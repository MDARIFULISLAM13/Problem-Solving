/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-10-2024
 * time : 22:06:10
 * Problem Name : E_Sakurako_Kosuke_and_the_Permutation
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

std::vector<int> generatePermutation(int n) {
    std::vector<int> permutation(n);

    // Define the base permutation for 5 elements
    std::vector<int> base = { 5, 2, 4, 3, 1 };

    // Fill the first five positions
    for (int i = 0; i < 5 && i < n; ++i) {
        permutation[i] = base[i];
    }

    // If n > 5, fill with remaining values from 6 to n
    for (int i = 5; i < n; ++i) {
        permutation[i] = i + 1; // Start filling from 6
    }

    return permutation;
}

void solve() {
    int n;
    cin >> n;
    vec arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int ans = 0;
    vector<bool>vis(n, 0);
    for (int i = 0;i < n;i++) {
        if (!vis[i]) {
            int j = i;

            int c = 0;
            while (!vis[j]) {
                vis[j] = true;
                j = arr[j] - 1;
                c++;
            }
            ans += (c - 1) / 2;
        }
    }
    cout << ans << endl;


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }



    return 0;
}
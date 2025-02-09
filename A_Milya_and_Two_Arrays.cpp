// /**
//  *
//  * Author : Md.Ariful Islam
//  * Date : 02-02-2025
//  * time : 20:40:28
//  * Problem Name : A_Milya_and_Two_Arrays
//  *
//  **/
// #ifdef __GNUC__
// #pragma GCC optimize("O3")
// #pragma GCC target("sse4")
// #endif
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long int;
// #define yes cout << "YES\n";
// #define no cout << "NO\n";
// #define endl "\n";
// #define ft float
// #define du double
// #define ull unsigned long long
// #define vec vector<ll>
// #define mem(dp,i) memset(dp,i,sizeof(dp));
// void solve() {
//     int n;
//     cin >> n;
//     vec a(n), b(n);

//     for (int i = 0;i < n;i++) {
//         cin >> a[i];
//     }
//     for (int i = 0;i < n;i++) {
//         cin >> b[i];
//     }
//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     int cnt = 0;
//     for (int i = 0;i < n;i++) {
//         if (a[i] != a[i - 1]) {
//             cnt++;
//         }
//     }
//     if (cnt >= 3) {
//         cout << "YES\n";
//         return;
//     }
//     for (int i = 0;i < n;i++) {
//         if (b[i] != b[i - 1]) {
//             cnt++;
//         }
//     }
//     if (cnt >= 4) {
//         cout << "YES\n";
//         return;
//     }
//     else {
//         cout << "NO\n";
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int t, n;
//     cin >> t;
//     while (t--) {
//         solve();
//     }

//     return 0;
// }


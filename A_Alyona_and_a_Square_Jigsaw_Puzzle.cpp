/**
 *
 * Author : Md.Ariful Islam
 * Date : 04-12-2024
 * time : 14:45:59
 * Problem Name : A_Alyona_and_a_Square_Jigsaw_Puzzle
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
void arif() {
    int n;
    cin >> n;
    int f;
    cin >> f;
    int ans = 1;
    int next = 8;
    int sum = 0;
    for (int i = 1;i < n;i++) {
        int v;
        cin >> v;
        sum += v;

        if (sum > next) {
            while (sum > next) {
                sum -= next;
                next += 8;
            }
            if (sum == next) {
                ans++;
            }
        }
        else if (sum == next) {
            next += 8;
            sum = 0;
            ans++;
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
        arif();
    }

    return 0;
}
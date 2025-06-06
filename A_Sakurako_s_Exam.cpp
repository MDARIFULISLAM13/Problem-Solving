/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-06-2025
 * time : 21:03:51
 * Problem Name : A_Sakurako_s_Exam
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
#define ft float "
void solve()
{
    int a, b;
    cin >> a >> b;
    b = b % 2;
    if (b == 1 && a >= 2)
    {
        b = 0, a -= 2;
    }
    a=a%2;
    if(a==0 && b==0)
        cout << "YES\n";
        else{
            cout << "NO\n";
        }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
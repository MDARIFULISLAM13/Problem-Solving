/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-07-27
 * Time : 21:11:46
 * Problem Name : C_Inversion_of_a_Subsequence
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    int arr[46];
    arr[0] = 0, arr[1] = 1;
    for (int i = 2; i <= 45; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
      //  cout << arr[i] << endl;
    }
    cout << arr[n] << endl;
    return 0;
}
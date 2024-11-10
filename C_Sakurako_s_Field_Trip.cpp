/**
 *
 * Author : Md.Ariful Islam
 * Date : 24-10-2024
 * time : 21:14:04
 * Problem Name : C_Sakurako_s_Field_Trip
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
    int arr[n + 1];
    for (int i = 1;i <= n;i++) {
        cin >> arr[i];
    }
    for (int i = 1;i <= n;i++) {


        int x = n - i + 1;

        if (arr[i] != arr[x - 1] && arr[i] != arr[x + 1]) {
            swap(arr[i], arr[x]);
        }



    }


    int ans = 0;

    for (int i = 2;i <= n;i++) {

        if (arr[i] == arr[i - 1]) {
            ans++;
        }
    }

    return ans;
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-10-2024
 * time : 02:14:22
 * Problem Name : B_Permutations_Primes
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
void solve() {
    int n;
    cin >> n;
    vector<int>odd;
    vector<int>even;
    for (int i = 1;i <= n;i++) {
        if (i % 2 == 0) {
            even.push_back(i);
        }
        else odd.push_back(i);
    }
    bool ck_odd = false, ck_even = false, last_odd = false, last_even = false;
    int odd_index = 0, even_index = 0;
    if (n % 2 != 0) {
        ck_even = true;
    }
    else {
        ck_odd = true;
    }
    for (int i = 1;i <= n;i++) {
        if (ck_odd == false) {
            ck_odd = true;
            ck_even = false;
            if (last_odd == false) {
                cout << odd.back() << " ";
                last_odd = true;
                odd.pop_back();
            }
            else {

                last_odd = false;
                cout << odd[odd_index] << " ";
                odd_index++;
            }

        }
        else if (ck_odd == true) {
            ck_odd = false;
            ck_even = true;
            // if (last_even == false) {
            //     cout << even.back() << " ";
            //     even.pop_back();
            //     last_even = true;
            // }
            // else {
            //     last_even = false;
            cout << even[even_index] << " ";
            even_index++;
            // }
        }
    }
    cout << endl;
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
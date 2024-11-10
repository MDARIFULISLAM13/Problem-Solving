/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-10-2024
 * time : 09:35:31
 * Problem Name : B_Yet_Another_Palindrome_Problem
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
void arif() {
    int n;
    cin >> n;

    map<int, vector<int>>m;
    for (int i = 0;i < n;i++) {
        int v;
        cin >> v;
        m[v].push_back(i);
    }
    for (auto i : m) {
        if (i.second.size() > 2) {
            cout << "YES\n";
            return;
        }
        if (i.second.size() == 2) {
            bool fast = true;
            int val = 0;
            for (auto j : i.second) {
                if (fast == true) {
                    val = j;
                    fast = false;
                }
                else {
                    if (abs(j - val) >= 2) {
                        cout << "YES\n";
                        return;
                    }
                }

            }
        }
    }
    cout << "NO\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)arif();

    return 0;
}
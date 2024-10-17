/**
 *
 * Author : Md.Ariful Islam
 * Date : 29-09-2024
 * time : 22:08:01
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
int minOperations(int n, int k) {
    int operations = 0;


    if (k == 1) {
        return n;
    }


    while (n > 0) {

        int maxPower = 1;
        while (maxPower <= n / k) {
            maxPower *= k;
        }


        n -= maxPower;
        operations++;
        if (maxPower == 1) {
            operations += n;
            n = 0;
        }
    }

    return operations;
}
void arif() {
    int n, k;
    cin >> n >> k;


    cout << minOperations(n, k) << "\n";
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
/**
 *
 * Author : Md.Ariful Islam
 * Date : 20-09-2024
 * time : 21:23:42
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

// Function to compute the minimum GCD sum
ll computeMinGCDSum(const vec& arr) {
    // Calculate the GCD of the entire array
    ll overallGCD = arr[0];
    for (ll num : arr) {
        overallGCD = __gcd(overallGCD, num);
    }

    // The minimum GCD sum is n times the overall GCD
    return static_cast<ll>(arr.size()) * overallGCD;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n;
        cin >> n; // Read the size of the array
        vec arr(n);

        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; // Read the elements of the array
        }

        // Compute and print the result for the current test case
        cout << computeMinGCDSum(arr) << endl; // Output the minimum GCD sum
    }

    return 0;
}

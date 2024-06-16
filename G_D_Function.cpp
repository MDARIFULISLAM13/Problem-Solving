#include <iostream>
#include <vector>
#include <cmath>
#define MOD 1000000007

using namespace std;

// Function to compute the sum of digits of a number
long long sum_of_digits(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to count valid numbers in a specific range
long long count_valid_numbers(long long l, long long r, long long k) {
    long long count = 0;
    long long start = pow(10, l);
    long long end = pow(10, r);

    for (long long n = start; n < end; ++n) {
        long long d_n = sum_of_digits(n);
        long long k_n = k * n;
        if (sum_of_digits(k_n) == k * d_n) {
            ++count;
        }
    }

    return count % MOD;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long l, r, k;
        cin >> l >> r >> k;

        if (l == r - 1) {
            cout << count_valid_numbers(l, r, k) << endl;
        }
        else {
            // Handle the case where the range is large efficiently
            // For now, we use the direct approach which might be slow for large ranges
            cout << count_valid_numbers(l, r, k) << endl;
        }
    }

    return 0;
}

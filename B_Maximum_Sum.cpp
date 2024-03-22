#include <iostream>
#include <vector>
#include <algorithm>
#define MOD 1000000007

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum = (sum + a[i]) % MOD;
        }

        long long maxPrefixSum = 0, prefixSum = 0;
        for (int i = 0; i < n; ++i)
        {
            prefixSum = (prefixSum + a[i]) % MOD;
            maxPrefixSum = max(maxPrefixSum, prefixSum);
        }

        long long maxSuffixSum = 0, suffixSum = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            suffixSum = (suffixSum + a[i]) % MOD;
            maxSuffixSum = max(maxSuffixSum, suffixSum);
        }

        long long result;
        if (k == 1)
        {
            result = max(maxPrefixSum, maxSuffixSum);
        }
        else
        {
            result = maxPrefixSum + maxSuffixSum;
            if (result < 0)
                result = 0;
            result += ((k - 2) * max(sum, maxPrefixSum + maxSuffixSum)) % MOD;
        }

        cout << result % MOD << endl;
    }

    return 0;
}

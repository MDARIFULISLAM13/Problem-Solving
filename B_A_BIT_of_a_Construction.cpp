#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(int n, int k)
{
    vector<int> result(n, 0);
    int max_power = log2(k);
    result[0] = pow(2, max_power) - 1;
    k -= result[0];
    if (k > 0)
        result[1] = k;
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}

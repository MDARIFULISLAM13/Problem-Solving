#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n];
    long long int mx = LLONG_MIN; // Use LLONG_MIN to find maximum
    long long int index;

    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        { // Find the jar with the most paint
            mx = a[i];
            index = i;
        }
    }

    long long int ans = mx * n; // Maximum number of squares painted with the most paint

    cout << ans << endl;

    return 0;
}

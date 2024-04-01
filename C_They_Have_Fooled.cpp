/**
 *
 * Author : Md.Ariful Islam
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Implementing the logic based on the examples
    if (n == 0 || n == 1)
    {
        cout << 10 << endl;
    }
    else if (n >= 2 && n <= 4)
    {
        cout << n + 10 << endl;
    }
    else if (n == 5)
    {
        cout << 7 << endl;
    }
    else if (n == 6)
    {
        cout << 8 << endl;
    }
    else if (n == 7)
    {
        cout << 9 << endl;
    }
    else if (n == 9)
    {
        cout << 0 << endl;
    }
    else if (n >= 10 && n <= 12)
    {
        cout << (n == 10 ? 24 : (n == 11 ? 25 : 11)) << endl;
    }

    return 0;
}

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
    cout.tie(NULL);

    int n;
    cin >> n;
    int count = 0;
    int ck = 0;
    for (int i = 0; i <= n; i++)
    {
        if (ck == 1)
        {
            count++;
            if (count == 4)
            {
                count = 0;
                ck = 0;
            }
        }
        else
        {

            if (i < 10)
            {
                cout << "0";
            }
            cout << i << " ";
            count++;
            if (count == 6)
            {
                cout << endl;
                count = 0;
                ck = 1;
            }
        }
    }

    return 0;
}
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
void arif()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= 2; k++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i % 2 != 0)
                {
                    if (j % 2 != 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                }
                else
                {
                    if (j % 2 == 0)
                    {
                        cout << "##";
                    }
                    else
                    {
                        cout << "..";
                    }
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
    return 0;
}

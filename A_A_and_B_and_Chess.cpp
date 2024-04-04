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
    ll w = 0, b = 0;
    for (int i = 1; i <= 64; i++)
    {
        char a;
        cin >> a;
        if (a > 50)
        {
            if (a < 90)
            {
                if (a == 'Q')
                {
                    w += 9;
                }
                else if (a == 'R')
                    w += 5;
                else if (a == 'B')
                {
                    w += 3;
                }
                else if (a == 'N')
                {
                    w += 3;
                }
                else if (a == 'P')
                {
                    w += 1;
                }
            }
            else
            {
                if (a == 'q')
                {
                    b += 9;
                }
                else if (a == 'r')
                    b += 5;
                else if (a == 'b')
                {
                    b += 3;
                }
                else if (a == 'n')
                {
                    b += 3;
                }
                else if (a == 'p')
                {
                    b += 1;
                }
            }
        }
    }
    if (b > w)
    {
        cout << "Black\n";
    }
    else if (w > b)
    {
        cout << "White\n";
    }
    else
    {
        cout << "Draw";
    }
    return 0;
}

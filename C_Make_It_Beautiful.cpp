/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {
        int a;
        ll b;
        cin >> a >> b;
        vector<ll> v;
        for (int i = 0; i < a; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < a; i++)
        {
            if (v[i] % 2 == 0 && b > 0)
            {
                v[i] += 1;
                b--;
            }
        }

        int i = 0;
        while (b > 0)
        {
            v[i % a] += 1;
            b--;
            i++;
        }

        ll beauty = 0;
        for (int i = 0; i < a; i++)
        {
            beauty += __builtin_popcountll(v[i]);
        }
        cout << beauty << endl;

    }

    return 0;
}
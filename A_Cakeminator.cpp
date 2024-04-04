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
    int r, c;
    cin >> r >> c;
    vector<string> a(r);
    for (int i = 0; i < r; i++)
    {
        cin >> a[i];
    }
    ll count = 0;
    for (int i = 0; i < r; i++)
    {
        string s = a[i];
        for (int j = 0; j < c; j++)
        {
            if (s.find('S') == 0)
            {
                count++;
            }
            else
            {
                for (int k = 0; k < r; k++)
                {
                    string b;
                    if (k != i)
                    {
                        b = a[k];
                    }
                    if (b[j] == 'S')
                    {
                        break;
                    }
                    if (k == (r - 1))
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count - 1;
    return 0;
}

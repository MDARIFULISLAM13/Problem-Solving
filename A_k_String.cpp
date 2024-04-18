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

    int k;
    cin >> k;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    string n;
    int count = 1;
    char p = s[0];

    for (int i = 1; i <= s.size(); i++)
    {
        if (s[i] == p)
        {
            count++;
        }
        else
        {
            if (count % k != 0)
            {
                cout << "-1\n";
                return 0;
            }
            else
            {
                int add = count / k;
                for (int j = 1; j <= add; j++)
                {
                    n += p;
                }
                count = 1;
                p = s[i];
            }
        }
    }
    for (int i = 1; i <= k; i++)
    {
        cout << n;
    }

    return 0;
}
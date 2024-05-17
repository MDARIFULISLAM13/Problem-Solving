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
    string s;
    cin >> s;
    int p = 1;
    int ck = 0;
    for (int i = 1; i < s.size(); i++)
    {

        if (s[i] != s[i - 1])
        {
            if (ck == 0)
            {
                if (s[i] == '1' && s[i - 1] == '0')
                {
                    ck = 1;
                    p -= 1;
                }
            }
            p++;
            while (1)
            {
                i++;
                if (s[i] != s[i - 1])
                 {i--;
                    break;
                }
            }
        }    
    }

    cout << p << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}

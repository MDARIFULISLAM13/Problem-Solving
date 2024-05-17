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
    float a = 0;

    for (int k = 0; k <= 2;)
    {

        float i = (a + k);
        a += 0.2;
        if ((int)a == a)
        {
            k += 1;
            a = 0;
        }

 for (int j = 1; j <= 3; j++)
        {
            if ((int)i == i)
            {
                printf("I=%d J=%d\n", (int)i, (int)i + j);
            }
            else
            {
                printf("I=%0.1f J=%0.1f\n", i, i + j);
            }
        }
        if (i == 2)
        {
            break;
        }
    }
    return 0;
}
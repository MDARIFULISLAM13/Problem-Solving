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
int n;
void arif(vector<int> &a)
{

    for (int i = 1; i <= 7; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= 7; i++)
    {
        n -= a[i];
        if (n <= 0)
        {
            cout << i << endl;
            return;
        }
        if (i == 7)
        {
            arif(a);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    vector<int> a(7);
    arif(a);

    return 0;
}

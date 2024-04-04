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

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = x2 - x1;
    int dy = y2 - y1;

    if (dx == 0 && dy == 0)
    {
        cout << "-1" << endl;
    }
    else if (dx == 0)
    {
        cout << x1 + abs(dy) << " " << y1 << " " << x2 + abs(dy) << " " << y2 << endl;
    }
    else if (dy == 0)
    {
        cout << x1 << " " << y1 + abs(dx) << " " << x2 << " " << y2 + abs(dx) << endl;
    }
    else if (abs(dx) == abs(dy))
    {
        cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}

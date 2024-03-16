#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, aa, aaa, b, bb, bbb, n;
    cin >> a >> aa >> aaa >> b >> bb >> bbb >> n;
    int an = a + aa + aaa;
    int bn = b + bb + bbb;
    int aans = an / 5;
    if (an % 5 != 0)
    {
        aans += 1;
    }
    int bans = bn / 10;
    if (bn % 10 != 0)
    {
        bans += 1;
    }
    if (aans + bans > n)
    {
        cout << "NO\n";
        return 0;
    }
    cout << "YES\n";
}
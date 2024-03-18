#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int a = 2 * t1 + v1 * s;
    int b = 2 * t2 + v2 * s;
    if (a == b)
    {
        cout << "Friendship\n";
    }
    else if (a > b)
    {
        cout << "Second\n";
    }
    else
    {
        cout << "First\n";
    }
}
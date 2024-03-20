#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < t; i++)
    {

        cout << s[i];
        i += c;
        c++;
    }
}
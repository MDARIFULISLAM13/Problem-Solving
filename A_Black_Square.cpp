#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for (int i = 1; i <= 4; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        int x = s[i] - '0';
        sum += a[x];
    }
    cout << sum << endl;
}
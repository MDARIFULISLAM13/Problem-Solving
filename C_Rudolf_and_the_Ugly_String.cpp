#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (s[i] == 'm' && (s[i + 1] == 'a' && s[i + 2] == 'p'))
        {
            count++;
            i += 2;
        }
        else if (s[i] == 'p' && (s[i + 1] == 'i' && s[i + 2] == 'e'))
        {
            count++;
            i += 2;
        }
    }
    cout << count << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {

        arif();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 10; j++)
        {
            if (s[j] == 'X')
            {
                int a = i;
                if (a > 5)
                {
                    a = 11 - a;
                }
                int b = j + 1;
                if (b > 5)
                {
                    b = 11 - b;
                }
                sum += min(a, b);
                        }
        }
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }
}
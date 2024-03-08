#include <bits/stdc++.h>
using namespace std;
void arif()
{
    int a, b;
    cin >> a >> b;
    int msum = 0;
    string s;
    vector<int> ss;

    for (int i = 1; i <= a; i++)
    {

        cin >> s;

        for (int i = 0; i < b; i++)
        {
            msum += s[i];
        }
        ss.push_back(msum);
        msum = 0;
    }
    sort(ss.begin(), ss.end());
    for (auto it = ss.begin(); it != ss.end(); it++)
    {
        cout << *it << endl;
    }
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
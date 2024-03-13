#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> a;
    int maxx = 0;
    int fsc = 0, fscc = 0, lsc = 0;
    int smi = INT_MAX, smxi = 0;
    for (int i = 0; i < n; i++)
    {
        string v;
        cin >> v;
        a.push_back(v);
        int mc = 0;
        for (int j = 0; j < m; j++)
        {
            if (v[j] == '*')
            {
                if (fscc == 0)
                {
                    fscc = 1;
                    fsc = i;
                }

                lsc = i;
                smi = min(smi, j);
                smxi = max(smxi, j);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i >= fsc && i <= lsc)
        {
            string c = a[i];
            for (int j = smi; j <= smxi; j++)
            {
                cout << c[j];
            }
            cout << "\n";
        }
    }
}
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string text, pattern;
    cin >> text >> pattern;
    int n = text.size(), m = pattern.size();
    vector<int> prefix(m);
    int j = 0;
    for (int i = 1; i < m; ++i)
    {
        while (j > 0 && pattern[i] != pattern[j])
            j = prefix[j - 1];
        if (pattern[i] == pattern[j])
            ++j;
        prefix[i] = j;
    }

    int count = 0;
    j = 0;
    for (int i = 0; i < n; ++i)
    {
        while (j > 0 && text[i] != pattern[j])
            j = prefix[j - 1];
        if (text[i] == pattern[j])
            ++j;
        if (j == m)
        {
            ++count;
            j = prefix[j - 1];
        }
    }
    cout << count;

    return 0;
}

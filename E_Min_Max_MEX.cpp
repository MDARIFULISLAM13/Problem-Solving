/**
 *
 * Author : Md.Ariful Islam
 * Date : 08-04-2025
 * time : 21:28:48
 * Problem Name : E_Min_Max_MEX
 *
 **/
#ifdef __GNUC__
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#endif
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
#define mem(dp, i) memset(dp, i, sizeof(dp));

bool done(const vec &a, int x, int k)
{
    // from gpt this function

    unordered_map<int, int> freq;
    int segments = 0;

    for (int num : a)
    {
        freq[num]++;
    }

    int count_segments = 0;
    unordered_map<int, int> current_freq;

    for (int num : a)
    {
        current_freq[num]++;

        bool valid = true;
        for (int i = 0; i < x; ++i)
        {
            if (current_freq[i] == 0)
            {
                valid = false;
                break;
            }
        }

        if (valid)
        {
            count_segments++;
            current_freq.clear();
        }
    }

    return count_segments >= k;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vec a(n);
    map<int, int> mp;
    bool f0 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            f0 = 1;
        }
        mp[a[i]]++;
    }
    if (f0 == 0)
    {
        cout << 0 << endl;
        return;
    }
    int mn = 0;
    while (true)
    {
        if (mp[mn] >= k)
        {
            mn++;
            continue;
        }
        else
        {
            break;
        }
    }

    int l = 0, h = mn + 1;
    while (l < h)
    {
        int mid = (l + h) / 2;
        if (done(a, mid, k))
            l = mid + 1;
        else
            h = mid;
    }

    cout << l - 1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

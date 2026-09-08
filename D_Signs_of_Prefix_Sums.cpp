/**
 *
 * Author : Md.Ariful Islam
 * Problem Name : Signs_of_Prefix_Sums
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define endl "\n"
#define vec vector<ll>

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    
    // Base checks (আপনার দেওয়া শর্ত)
    if (s[0] == '0')
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == '0' && s[i - 1] == '0')
        {
            cout << -1 << endl;
            return;
        }
    }
    
    vec v(n);
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            // যদি আগে থেকেই sum 1 থাকে, তাহলে 1 বানাতে গেলে 0 বসাতে হবে (যা অবৈধ)
            // তাই তখন আমরা sum কে 2 বানাবো।
            if (sum == 1) {
                v[i] = 1; // 2 - 1 = 1
                sum = 2;
            } else {
                v[i] = abs(1 - sum); // অন্য সব ক্ষেত্রে টার্গেট 1
                sum = 1;
            }
        }
        else if (s[i] == '-')
        {
            // যদি আগে থেকেই sum -1 থাকে, তবে টার্গেট -2
            if (sum == -1) {
                v[i] = 1; // abs(-2 - (-1)) = 1
                sum = -2;
            } else {
                v[i] = abs(-1 - sum); // অন্য সব ক্ষেত্রে টার্গেট -1
                sum = -1;
            }
        }
        else // s[i] == '0'
        {
            v[i] = abs(0 - sum);
            sum = 0;
        }
    }

    ll mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(v[i], mx);
    }
    cout << mx << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int qrTNum;
    if (cin >> qrTNum) {
        while (qrTNum--)
            solve();
    }

    return 0;
}
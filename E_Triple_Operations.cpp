#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define double long double
const int mod = 1e9 + 7;
const double eps = 1e-9;
const double pi = 3.14159265358979323846;
#define pb push_back
#define mp make_pair
#define v1(v, n) vector<ll> v(n)
#define v2(v, n, m) vector<vector<ll>> v(n, vector<ll>(m))
#define maxv(arr) *max_element(arr.begin(), arr.end())
#define minv(arr) *min_element(arr.begin(), arr.end())
#define sumv(arr) accumulate(arr.begin(), arr.end(), (ll)0)
#define rv(arr) reverse(arr.begin(), arr.end())
#define sortv(arr) sort(arr.begin(), arr.end())
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define ret return

int solve()
{

    string s, t;
    cin >> s >> t;
    int i = 0;
    int j = 0;
    int ssz = s.size();
    int tsz = t.size();

    while (i < ssz && j < tsz)
    {
        if (s[i] == '?')
        {
            s[i] = t[j];
            i++;j++;
        }
        else
        {
            if (s[i] == t[j])
            {
                j++;
            }
            i++;
        }
    }

    i = 0;
    j = 0;
    while (i < ssz && j < tsz) {
        if (s[i] == t[j]) {
            j++;
        }
        i++;
    }

    if (j == tsz) {
        pyes;
        for (int i = 0; i < ssz; i++)
        {
            if (s[i] == '?') {
                cout << "a";
            }
            else {
                cout << s[i];
            }
        }
        cout << endl;

    }
    else {
        pno;
    }
    return 0;
}

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        solve();
    }
    return 0;
}
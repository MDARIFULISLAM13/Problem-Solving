
// Practice is the only shortcut to improve
/**
 * Author    : Yeasin Haque
 * Date      :
 */
#include <bits/stdc++.h>

using namespace std;

#define sz(x) (int)(x).size()
#define trace(x) cerr << #x << " = " << x << '\n';
#define trace2(x, y) cerr << #x << "=" << x << "\t" << #y << "=" << y << '\n';
template <class T>
T lcm(T a, T b) { return (abs(a * b) / gcd(a, b)); }

#define N (int)(1e7 + 2)
#define MOD (int)(1e9 + 7)
#define PI 2 * acos(0.0)
#define INF_MAX 2147483647
#define INF_MIN -2147483648

typedef long long LL;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<pii> vii;
typedef map<string, int> msi;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<int, string> mis;

LL solve()
{
    int n, x;
    LL k;
    cin >> n >> x >> k;

    string s;
    cin >> s;

    if (s == "LLR")
    {

        return 1;
    }
    mii fv;
    LL zc = 0, te = 0;

    fv[x] = 0;
    int po = x;

    while (te < k)
    {
        for (int i = 0; i < n && te < k; ++i)
        {
            if (s[i] == 'L')
                po--;
            else
                po++;

            te++;

            if (po == 0)
            {
                zc++;
                if (fv.count(po))
                {
                    LL cl = te - fv[po];
                    LL rt = k - te;
                    zc += (rt / cl);
                    cout << zc << '\n';
                    return;
                }
                fv[po] = te;
            }
        }
    }
    return zc;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;

    return 0;
}

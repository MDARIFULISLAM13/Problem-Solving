#include<bits/stdc++.h>
using namespace std;
#define y1 as214
#define ii pair < ll , int >
#define iii pair < int , ii >
#define iv pair < ii , ii >
#define fi first
#define se second
#define fr front()
#define pb push_back
#define FOR(i , x , n) for(int i = x ; i <= n ; ++i)
#define REP(i , n) for(int i = 0 ; i < n ; ++i)
#define FORD(i , x , n) for(int i = x ; i >= n ; --i)
#define ll long long
#define oo 1e7
#define int long long
const int N = 1e6 + 5;
int q, n, mod = 998244353;
int arr[N], max_val[N], min_val[N], ways_max[N], ways_min[N];
main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    while (q--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
        max_val[1] = max(arr[1], abs(arr[1]));
        min_val[1] = min(arr[1], abs(arr[1]));
        if (arr[1] >= 0)
        {
            ways_max[1] = 2;
            ways_min[1] = 2;
        }
        else
        {
            ways_max[1] = 1;
            ways_min[1] = 1;
        }

        for (int i = 2; i <= n; i++)
        {
            max_val[i] = max({ max_val[i - 1] + arr[i],
                              abs(max_val[i - 1] + arr[i]),
                              min_val[i - 1] + arr[i],
                              abs(min_val[i - 1] + arr[i]) });

            if (max_val[i] == max_val[i - 1] + arr[i])
                ways_max[i] = (ways_max[i] + ways_max[i - 1]) % mod;

            if (max_val[i] == abs(max_val[i - 1] + arr[i]))
                ways_max[i] = (ways_max[i] + ways_max[i - 1]) % mod;

            if (max_val[i - 1] != min_val[i - 1])
            {
                if (max_val[i] == min_val[i - 1] + arr[i])
                    ways_max[i] = (ways_max[i] + ways_min[i - 1]) % mod;

                if (max_val[i] == abs(min_val[i - 1] + arr[i]))
                    ways_max[i] = (ways_max[i] + ways_min[i - 1]) % mod;
            }

            min_val[i] = min({ max_val[i - 1] + arr[i],
                              abs(max_val[i - 1] + arr[i]),
                              min_val[i - 1] + arr[i],
                              abs(min_val[i - 1] + arr[i]) });

            if (min_val[i] == max_val[i - 1] + arr[i])
                ways_min[i] = (ways_min[i] + ways_max[i - 1]) % mod;

            if (min_val[i] == abs(max_val[i - 1] + arr[i]))
                ways_min[i] = (ways_min[i] + ways_max[i - 1]) % mod;

            if (max_val[i - 1] != min_val[i - 1])
            {
                if (min_val[i] == min_val[i - 1] + arr[i])
                    ways_min[i] = (ways_min[i] + ways_min[i - 1]) % mod;

                if (min_val[i] == abs(min_val[i - 1] + arr[i]))
                    ways_min[i] = (ways_min[i] + ways_min[i - 1]) % mod;
            }
        }
        cout << ways_max[n] << "\n";
        for (int i = 1; i <= n; i++)
            ways_max[i] = ways_min[i] = 0;
    }
}

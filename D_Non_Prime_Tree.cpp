/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-10-2024
 * time : 13:14:04
 *
 **/
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

const int mx = 2e5 + 123;
vector<int> adj[mx];
vector<int> result(mx);
const int lm = 1e7 + 123;
bitset<lm> ip;
vector<int> p;

void Sieve_of_Eratosthenes(int n)
{
    p.push_back(2);
    for (int i = 3; i <= n; i += 2)
    {
        ip[i] = true;
    }
    for (int i = 3; i * i <= n; i += 2)
    {
        if (ip[i] == true)
        {
            for (int j = i * i; j <= n; j += i * 2)
            {
                ip[j] = false;
            }
        }
    }
    ip[2] = true;
}

int car;

void dfs(int node, int parent)
{
    result[node] = car++;
    for (int neighbor : adj[node])
    {
        if (neighbor != parent)
        {

            while (ip[abs(result[node] - car)])
            {
                car++;
            }
            dfs(neighbor, node);
        }
    }
}

void arif()
{
    int n;
    cin >> n;


    for (int i = 1; i <= n; i++)
    {
        adj[i].clear();
    }


    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    car = 1;
    dfs(1, -1);


    int mx = *max_element(result.begin() + 1, result.begin() + n + 1);
    if (mx > 2 * n)
    {
        cout << -1 << endl;
        return;
    }


    for (int i = 1; i <= n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Sieve_of_Eratosthenes(lm);

    int t;
    cin >> t;
    while (t--)
    {
        arif();
    }

    return 0;
}

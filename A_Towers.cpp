/**
 *
 * Author : Md.Ariful Islam
 * Date : 03-06-2024
 * time : 13:03:34
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    set<int>a;
    vec b(1001, 0);
    for (int i = 0;i < n;i++) {
        int v;
        cin >> v;
        a.insert(v);
        b[v]++;
    }
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    cout << b[0] << " ";
    cout << a.size();


    return 0;
}
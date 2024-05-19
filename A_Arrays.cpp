/**
 *
 * Author : Md.Ariful Islam
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

    int na, nb;
    cin >> na >> nb;
    int a, b;
    cin >> a >> b;
    int A[na], B[nb];
    for (int i = 1;i <= na;i++) {
        cin >> A[i];
    }
    for (int i = 1;i <= nb;i++) {
        cin >> B[i];
    }

    if (A[a] >= B[nb - b + 1]) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";

    return 0;
}
/**
 *
 * Author : Md.Ariful Islam
 * Date : 16-09-2024
 * time : 22:03:23
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

    int c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    vector<int>v1(c1);
    vector<int>v2(c2);
    vector<int>v3(c3);
    for (int i = 0;i < c1;i++) {
        cin >> v1[i];
        sum1 += v1[i];
    }
    for (int i = 0;i < c2;i++) {
        cin >> v2[i];
        sum2 += v2[i];
    }
    for (int i = 0;i < c3;i++) {
        cin >> v3[i];
        sum3 += v3[i];
    }
    int i1 = 0, i2 = 0, i3 = 0;

    while (1) {
        if (sum1 == sum2 && sum2 == sum3) {
            break;
        }
        int mn = min(min(sum1, sum2), sum3);
        if (mn == 0) {
            break;
        }
        if (sum1 > mn) {
            sum1 -= v1[i1];
            i1++;
        }
        if (sum2 > mn) {
            sum2 -= v2[i2];
            i2++;
        }
        if (sum3 > mn) {
            sum3 -= v3[i3];
            i3++;
        }
    }
    cout << sum2;
    return 0;
}
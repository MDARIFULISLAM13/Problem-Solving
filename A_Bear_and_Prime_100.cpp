/**
 *
 * Author : Md.Ariful Islam
 * Date : 28-08-2025
 * time : 19:18:10
 * Problem Name : A_Bear_and_Prime_100
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
#define ft float
#define du double
#define ull unsigned long long
#define vec vector<ll>
#define mem(dp, i) memset(dp, i, sizeof(dp));

vector<int> divBy2 = {22, 26, 34, 38, 46, 58, 62, 74, 82, 86,94};
vector<int> divBy3 = {33, 39, 51,57, 69, 87, 93};
vector<int> divBy5 = {25, 55, 65, 85, 95};
vector<int> divBy7 = {49,77, 91};

 int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cnt = 0, div = 0;

    for (int i = 2; i <= 10; i++)
    {
        cout << i << endl;
        string s;
        cin >> s;
        if (s == "yes")
        {
            ++cnt;
            div = i;
        }
    }
    if (cnt > 1)
    {
        cout << "composite" << endl;
        return 0;
    }
    if (div == 2)
    {
        for (auto i : divBy2)
        {
            cout << i << endl;
            string s;
            cin >> s;
            if (s == "yes")
            {
                ++cnt;
                div = i;
            }
        }
        if (cnt > 1)
        {
            cout << "composite" << endl;
            return 0;
        }
    }
    if (div == 3)
    {
        for (auto i : divBy3)
        {
            cout << i << endl;
            string s;
            cin >> s;
            if (s == "yes")
            {
                ++cnt;
                div = i;
            }
        }
        if (cnt > 1)
        {
            cout << "composite" << endl;
            return 0;
        }
    }
    if (div == 5)
    {
        for (auto i : divBy5)
        {
            cout << i << endl;
            string s;
            cin >> s;
            if (s == "yes")
            {
                ++cnt;
                div = i;
            }
        }
        if (cnt > 1)
        {
            cout << "composite" << endl;
            return 0;
        }
    }
    if (div == 7)
    {
        for (auto i : divBy7)
        {
            cout << i << endl;
            string s;
            cin >> s;
            if (s == "yes")
            {
                ++cnt;
                div = i;
            }
        }
        if (cnt > 1)
        {
            cout << "composite" << endl;
            return 0;
        }
    }
    cout << "prime" << endl;

    return 0;
}
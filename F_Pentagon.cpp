/**
 *
 * Author : Md.Ariful Islam
 * Date : 19-08-2024
 * time : 23:19:02
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

int min_distance(char a, char b) {
    string x = "ABCDE";
    int index_a = x.find(a);
    int index_b = x.find(b);


    int dist = (index_a - index_b + 5) % 5;
    return min(dist, 5 - dist);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string S, T;
    cin >> S >> T;


    int s = min_distance(S[0], S[1]);
    int t = min_distance(T[0], T[1]);


    if (s == t) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string>a;
    vector<int>A;
    for (int i = 0;i < n - 1;i++) {
        char aa = s[i];
        char aaa = s[i + 1];
        string b = "";
        b += (aa);
        b += aaa;
        auto it = find(a.begin(), a.end(), b);
        int j = distance(a.begin(), it);
        if (it == a.end()) {
            a.push_back(b);
            A.push_back(1);
        }
        else {
            A[j]++;
        }


    }
    int index = 0;
    int mx = 0;
    for (int i = 0;i < A.size();i++) {
        if (A[i] > mx) {
            mx = A[i];
            index = i;
        }
    }
    cout << a[index] << endl;


    return 0;
}
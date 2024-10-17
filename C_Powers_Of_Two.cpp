/**
 *
 * Author : Md.Ariful Islam
 * Date : 18-10-2024
 * time : 03:22:49
 * Problem Name : C_Powers_Of_Two
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
vector<int> powers;
void representAsPowerOf2(int n) {


    int power = 0;
    while (n > 0) {
        if (n & 1) {
            powers.push_back(pow(2, power));
        }
        cout << n << " ";
        n = n >> 1; // ডানদিকে শিফট
        power++;
        cout << n << endl;
    }


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    if (n < k) {
        no;
        return 0;
    }
    representAsPowerOf2(n);
    if (powers.size() > k) {
        no;
        return 0;
    }
    int i = 0;
    while (powers.size() != k) {
        if (powers[i] != 1) {
            powers[i] /= 2;
            powers.push_back(powers[i]);

        }
        else {
            i++;
        }
    }
    yes;
    for (auto i : powers) cout << i << " ";

    return 0;
}
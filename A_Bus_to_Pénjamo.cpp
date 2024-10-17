/**
 *
 * Author : Md.Ariful Islam
 * Date : 14-10-2024
 * time : 01:39:58
 * Problem Name : A_Bus_to_Pénjamo
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
void arif() {
    int n, r;
    cin >> n >> r;
    int ex1 = 0, ex2 = 0;
    int happy = 0;
    while (n--) {

        int v;
        cin >> v;
        if (v == 2) {
            happy += 2;
            r--;
        }
        else {
            if (v % 2 == 0) {
                ex2 += v;
            }
            else {

                ex1 += 1;
                v -= 1;
                ex2 += v;
            }



        }

    }
    while (ex2 != 0) {
        ex2 -= 2;
        happy += 2;
        r -= 1;
    }
    while (ex1 > r) {
        ex1 -= 2;
        r--;
    }
    happy += ex1;
    cout << happy << endl;




}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        arif();
    }

    return 0;
}
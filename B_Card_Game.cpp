
/**
 *
 * Author : Md.Ariful Islam
 * Date : 06-08-2024
 * time : 20:46:30
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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int wins = 0;
    vector<int> suneet = { a1, a2 };
    vector<int> slavic = { b1, b2 };

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            int suneetWins = 0;
            int slavicWins = 0;

            if (suneet[i] > slavic[j]) ++suneetWins;
            else if (suneet[i] < slavic[j]) ++slavicWins;

            if (suneet[(i + 1) % 2] > slavic[(j + 1) % 2]) ++suneetWins;
            else if (suneet[(i + 1) % 2] < slavic[(j + 1) % 2]) ++slavicWins;

            if (suneetWins > slavicWins) ++wins;
        }
    }
    cout << wins << endl;

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
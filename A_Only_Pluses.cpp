
/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-07-2024
 * time : 20:39:56
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
    int a, b, c;
    cin >> a >> b >> c;
    int max_product = a * b * c;


    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= 5 - i; j++) {
            int k = 5 - i - j;
            max_product = max(max_product, (a + i) * (b + j) * (c + k));
        }
    }
    cout << max_product << endl;

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
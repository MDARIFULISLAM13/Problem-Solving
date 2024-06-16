/**
 *
 * Author : Md.Ariful Islam
 * Date : 11-06-2024
 * time : 22:27:23
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

    int qux;
    cin >> qux;

    for (int quux = 0; quux < qux; ++quux) {
        long long int corge, grault;
        cin >> corge >> grault;

        vector<long long int> garply(grault);
        vector<long long int> waldo(grault);
        for (int i = 0; i < grault; ++i) {
            cin >> garply[i];
        }
        for (int i = 0; i < grault; ++i) {
            cin >> waldo[i];
        }

        priority_queue<pair<long long int, int>, vector<pair<long long int, int>>, greater<pair<long long int, int>>> fred;

        for (int i = 0; i < grault; ++i) {
            fred.push(make_pair(1, i));
        }

        long long int plugh = 0;
        while (corge > 0) {
            plugh = fred.top().first;

            while (!fred.empty() && fred.top().first == plugh) {
                int thud = fred.top().second;
                fred.pop();

                corge -= garply[thud];

                fred.push(make_pair(plugh + waldo[thud], thud));
            }
        }

        cout << plugh << endl;
    }


    return 0;
}
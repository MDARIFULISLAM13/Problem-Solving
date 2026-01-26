/**
 *
 * Author : Md.Ariful Islam
 * Date : 2026-01-07
 * Time : 00:18:43
 * Problem Name : D_Blackslex_and_Penguin_Civilization
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
#define rev(a) reverse(a.begin(), a.end());
#define sort(a) sort(a.begin(), a.end());
#define mem(dp, i) memset(dp, i, sizeof(dp));



int main()
{

    string x;
    cin >> x;
    //x hosse contest name
    int mn, mx, n;
    cin >> mn >> mx >> n;

    vector<string> v;

    while (n--)
    {

        srand(time(0));
        int num = mn + rand() % (mx - mn + 1);

        // 1 ta A 2 ta B 3 ta c 2 ta d and 1 ta e akta f...jei porjonto n!=0 hoy...
        string s = to_string(num) + 'A';
        // ami check korbo aita amar database a ase kina jodi thake tahole jotokon thakbe totokon nibo jei porjonto database a nai amon kisu pai....tobe max 30000 bar chalabo loop
    }

   //then ami ja ja nibo ta frontend a sent korbo and backend a database a store korbo
   return 0;
}
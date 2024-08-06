/**
 *
 * Author : Md.Ariful Islam
 * Date : 30-07-2024
 * time : 21:14:46
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

int calculateCost(const string& s) {
    stack<int> openBrackets;
    int cost = 0;

    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == '(') {


            openBrackets.push(i);
        }
        else if (s[i] == ')') {


            int openIndex = openBrackets.top();
            openBrackets.pop();


            cost += (i - openIndex);
        }
    }

    return cost;
}
void arif() {
    string s;
    int n;
    cin >> n >> s;
    int pre = 0, pro = 0;
    for (int i = 0;i < n;i++) {

        if (s[i] == '(') {
            pre++;

        }
        else if (s[i] == ')') {
            pro++;
        }

        if (s[i] == '_') {

            if (i == 0) {
                s[i] = '(';
                pre++;
            }
            else {
                if (pre > pro) {
                    s[i] = ')';
                    pro++;
                }
                else {
                    s[i] = '(';
                    pre++;
                }
            }

        }

    }
    cout << calculateCost(s) << endl;

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

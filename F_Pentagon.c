#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    string s, t;
    cin >> s >> t;
    char s1 = s[0], s2 = s[1], t1 = t[0], t2 = t[1];
    int x = abs(s1 - s2);
    int y = abs(t1 - t2);
    if (s1 == s2 || t1 == t2) cout << "No" << endl;
    else if (x == y) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
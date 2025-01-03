#include <bits/stdc++.h>
using namespace std;

// Reads two integers and prints their sum

int main() {
    int a;
    cin >> a;
    int t = 1;
    while (a--) {
        int p, s, r;

        cout << "Case " << t;
        cin >> p >> s >> r;
        if (p != s || (p == s && r == 1)) {
            cout << ": Yes" << endl;++t;
        }
        else {
            cout << ": No" << endl;++t;
        }

    }
}

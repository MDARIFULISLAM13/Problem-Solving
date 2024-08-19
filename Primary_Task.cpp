#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

void arif() {
    int n;
    cin >> n;

    // Convert the number into a string to check its structure
    string s = to_string(n);

    // Check if it starts with "10"
    if (s.substr(0, 2) != "10") {
        cout << "NO\n";
        return;
    }

    // Check if the remaining characters are all digits and non-zero
    for (int i = 2; i < s.size(); ++i) {
        if (s[i] != '0') {
            cout << "NO\n";
            return;
        }
    }

    // If all conditions pass, then it's a valid power of 10
    cout << "YES\n";
}

int main() {
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

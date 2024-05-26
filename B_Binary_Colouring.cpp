#include <iostream>
#include <vector>

using namespace std;

vector<int> generateArray(int x) {
    vector<int> a;
    int n = 0;
    while (x > 0) {
        int bit = x & 1;
        if (bit == 1) {
            if (n > 0 && a.back() != 0) {
                a.push_back(0); // Insert a zero if the previous element is not zero
            }
            a.push_back(1);
        }
        else if (n > 0 && a.back() != 0) {
            a.push_back(0); // Insert a zero if the previous element is not zero
        }
        x >>= 1;
        n++;
    }
    if (a.empty() || a.back() != 0) {
        a.push_back(0); // Ensure the last element is zero
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;

        vector<int> a = generateArray(x);

        cout << a.size() << endl;
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

bool isPowerOf2(long long N) {
    if (N <= 0) {
        return false;
    }
    return (N & (N - 1)) == 0;
}

int main() {
    long long N;
    cin >> N;

    if (isPowerOf2(N)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

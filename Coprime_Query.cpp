#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

#define MAX_VAL 1000000


vector<int> preprocess_frequencies(const vector<int>& a) {
    vector<int> freq(MAX_VAL + 1, 0);
    for (int num : a) {
        if (num <= MAX_VAL) {
            freq[num]++;
        }
    }
    return freq;
}


int count_coprime(const vector<int>& freq, int v) {
    int count = 0;
    for (int i = 1; i <= MAX_VAL; ++i) {
        if (freq[i] > 0 && __gcd(i, v) == 1) {
            count += freq[i];
        }
    }
    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    vector<int> freq = preprocess_frequencies(a);

    while (q--) {
        int v;
        cin >> v;
        cout << count_coprime(freq, v) << endl;
    }

    return 0;
}

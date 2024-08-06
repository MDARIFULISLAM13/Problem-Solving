#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl "\n";
#define ft float
#define du double
#define ull unsigned long long

vector<int> ck(200000 + 123);
vector<ll> prefixSum(200000 + 123);

void arif() {
    int cr = 1;
    int val = 3;
    int pw = 2;
    for (int i = 1; i <= 200123; i++) {
        if (i == val) {
            ck[i] = cr + 1;
            val = pow(3, pw);
            pw++;
            cr++;
        }
        else {
            ck[i] = cr;
        }
    }

    prefixSum[1] = ck[1];
    for (int i = 2; i <= 200123; i++) {
        prefixSum[i] = prefixSum[i - 1] + ck[i];
    }
}

ll getRangeSum(int l, int r) {
    if (l == 1) {
        return prefixSum[r];
    }
    else {
        return prefixSum[r] - prefixSum[l - 1];
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    arif();

    int n;
    cin >> n;
    while (n--) {
        int l, r;
        cin >> l >> r;
        cout << getRangeSum(l + 1, r) + ck[l] * 2 << endl;
    }

    return 0;
}

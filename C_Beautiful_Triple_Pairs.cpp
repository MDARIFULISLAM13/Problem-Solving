#include <stdio.h>

void arif() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int ans = 0;
    for (int i = 0; i < n - 2; i++) {
        if ((a[i] != a[i + 1]) && (a[i + 1] == a[i + 2])) {
            ans++;
        }
        else if ((a[i] == a[i + 1]) && (a[i + 1] != a[i + 2])) {
            ans++;
        }
        else if ((a[i] == a[i + 1]) && (a[i + 1] == a[i + 2])) {
            ans++;
        }
    }
    printf("%d\n", ans);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        arif();
    }
    return 0;
}

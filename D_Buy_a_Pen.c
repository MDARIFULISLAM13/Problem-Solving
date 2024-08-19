
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <limits.h>
#define ll long long int
#define ft float
#define dl double
#define ch char

int main() {

    int r, g, b;
    scanf("%d %d %d", &r, &g, &b);
    char a[10];
    scanf("%s", &a);

    if (a[0] == 'R') {

        if (g >= b) {
            printf("%d", b);
        }
        else {
            printf("%d", g);
        }

    }
    if (a[0] == 'G') {

        if (r >= b) {
            printf("%d", b);
        }
        else {
            printf("%d", r);
        }

    }
    if (a[0] == 'B') {

        if (g >= r) {
            printf("%d", r);
        }
        else {
            printf("%d", g);
        }

    }


    return 0;
}


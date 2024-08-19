/*
*....B.Sc in CSE 1st Year 1st semester Examination of 2023....*
*....Name : Md. Ariful Islam
*....Exam Roll : 3229
*....Registration No : 202205558
*/
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

    int a, t, n;
    scanf("%d %d %d", &n, &t, &a);
    int x = n - a - t;
    int mx = 0, min = 0;
    if (a > t) {
        mx = a;
        min = t;
    }
    else {
        mx = t;
        min = a;
    }
    if (mx > min + x) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

    return 0;
}


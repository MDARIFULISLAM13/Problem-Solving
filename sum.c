#include<stdio.h>
#include<math.h>
int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    int sub = abs(a - b);
    int mul = a * b;
    int div = a / b;
    int s1 = 0, s2 = 0;
    int ck1 = 0, ck2 = 0, ck3 = 0, ck4 = 0;
    {
        if (sum > mul) {
            s1 = sum;
            printf("grater is sum : %d\n", sum);
            ck1 = 1;

        }
        else {
            s1 = mul;
            printf("grater is mul: %d\n", mul);
            ck2 = 1;
        }
    }
    {
        if (sub > div) {
            s2 = sub;
            printf("grater is sub: %d\n", sub);
            ck3 = 1;
        }
        else {
            s2 = div;
            printf("grater is div : %d\n", div);
            ck4 = 1;
        }
    }
    {
        if (s1 > s2) {
            if (ck1 == 1) {
                printf("Final grater is sum : %d", s1);

            }
            else {
                printf("Final grater is mul : %d", s1);
            }
        }
        else {
            if (ck3 == 1) {
                printf("Final grater is sub : %d", s2);

            }
            else {
                printf("Final grater is div : %d", s2);
            }
        }
    }









}
#include <stdio.h>
#include <math.h>

int hasZero(int n)
{
    int digits = (int)log10(n) + 1; 

    while (digits--)
    {
        if (n % 10 == 0)
            return 1;
        n /= 10;
    }

    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);

    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (!hasZero(i))
            sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}
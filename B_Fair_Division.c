#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        int a, b, sum = 0, t1 = 0, t2 = 0;
        scanf("%d", &a);
        for (int i = 1; i <= a; i++)
        {
            scanf("%d", &b);
            if (b == 1)
            {
                t1++;
            }
            else
            {
                t2++;
            }
            sum += b;
        }
        if (sum % 2 != 0 || (a % 2 != 0 && t1 % 2 != 0) || (a % 2 != 0 && t1 == 0))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

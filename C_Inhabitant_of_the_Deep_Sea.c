#include <stdio.h>

#define yes printf("YES\n")
#define no printf("NO\n")
#define endl printf("\n")
#define vec_size 100005 // Adjust the size according to the maximum size of the vector

void arif()
{
    int n, k;

    scanf("%d %d", &n, &k);
    int ck = n;
    int v[vec_size];
    for (int i = 0; i < n; i++)
    {
        int vel;
        scanf("%d", &vel);
        v[i] = vel;
    }
    int count = 0;
    while (k > 0)
    {
        if (n > 1)
        {
            int mn = v[0] < v[n - 1] ? v[0] : v[n - 1];
            if (mn == v[0])
            {
                k -= mn;
                k -= mn;
                for (int i = 0; i < n - 1; i++)
                    v[i] = v[i + 1];
                count++;
                v[n - 1] -= mn;
                if (v[n - 1] == 0)
                {
                    n--;
                    if (k >= 0)
                        count++;
                }
            }
            else
            {
                k -= mn;
                k -= mn;
                if (k >= 0)
                {
                    count++;
                    n--;
                }
                v[0] -= mn;
            }
        }
        else
        {
            if (v[0] != 0)
            {
                if (v[0] <= k)
                {
                    count++;
                    break;
                }
            }
        }
    }
    if (count > ck)
    {
        count = ck;
    }
    printf("%d\n", count);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        arif();
    }
    return 0;
}

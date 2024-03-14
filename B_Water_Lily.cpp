#include <bits/stdc++.h>
using namespace std;
int main()
{
    float h, l;
    scanf("%f %f", &h, &l);
    float H = h + 0.000;
    float L = l + 0.00;
    float ans = ((pow(L, 2) - pow(H, 2)) / (2.00 * H));
    printf("%f\n", ans);
}

#include <stdio.h>
int main()
{
    double x, x1, x2, p1, p2;

    scanf("%lf", &x);
    scanf("%lf", &x2);
    scanf("%lf %lf", &p1, &p2);

    x1 = ((x * (p1 + p2)) - (x2 * p2)) / p1;
    printf("%lf", x1);
    return 0;
}
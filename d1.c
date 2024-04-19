
#include <stdio.h>
int main()
{
    long long int h, m, s;
    scanf("%lld", &h);
    m = h * 60LL;
    s = m * 60LL;
    printf("%lld\n%lld", m, s);
    return 0;
}

#include <stdio.h>
int main()
{
    int par, impar, numero;
    impar = 0;
    par = 0;
    for (int i = 0; i > -1; i++)
    {
        scanf("%d", &numero);
        if (numero == 0)
        {
            break;
        }
        else
        {
            if (numero % 2 == 0)
            {
                par += numero;
            }
            else
            {
                impar += numero;
            }
        }
    }
    printf("%d %d", par, impar);

    return 0;
}

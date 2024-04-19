#include <stdio.h>
int main()
{
    int numero, soma;
    soma = 0;
    for (int i = 0; i > -1; i++)
    {
        scanf("%d", &numero);
        if (numero == 0)
        {
            break;
        }
        else if (numero%2==0){
            soma += numero;
        }
        
        
    }
    printf("%d", soma);

    return 0;
}

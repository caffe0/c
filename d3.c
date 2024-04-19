#include <stdio.h>
int main()
{
    int repete, numeros;
    scanf("%d", &numeros);
    for (int a = 0; a < 2; a++)
    {
        for (int i = 1; i <= numeros; i++){
            for (repete = 1; repete <= i; repete++){
                printf("%02d ", i);
            }
        printf("\n");
        }
    }
    
    return 0;
}


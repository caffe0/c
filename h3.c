#include <stdio.h>
int main()
{
    int i =0, cod, nt, cod2=-1, nt2=-1, dia=1;
    while(scanf("%d", &i)!=EOF){
        for(int c = 0; c<i; c++){
            scanf("%d %d", &cod, &nt);
            if(nt>nt2||(nt==nt2&&cod<cod2)){
                cod2=cod;
                nt2=nt;
            }
        }
        printf("DIA %d\n%d\n\n", dia, cod2);
        cod2 = -1;
        nt2=-1;
        dia++;
    }
    return 0;
}

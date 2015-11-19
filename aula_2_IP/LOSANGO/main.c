#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numlinhas, b, p, i=0, j;
    printf("numero de linhas: ");
    scanf("%d", &numlinhas);
    while(numlinhas%2==0){
        printf("numero tem que ser par");
        scanf("%d", &numlinhas);
    }
    while(i<numlinhas){
        b=i-(numlinhas/2);
        b=abs(b);
        j=0;
        while(j<b){
            printf(" ");
            j++;
        }
        p=numlinhas-2*b;
        j=0;
        while(j<p){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    /*for(i=1; i<=numlinhas;i++){

        for(v=1; v<=i;v++){
            printf("*");
        }
        printf("\n");
    }*/
    return 0;
}

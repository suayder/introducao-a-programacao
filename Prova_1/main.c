#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], soma2=0, soma=0, n,p;
    printf("Digite os valores do vetor:\n");
    for(p=0;p<10;p++){
        scanf("%d", &vetor[p]);
    }
    p=0;
    while(p<10){
        soma+=vetor[p];
        for(n=p+1;n<10;n++){
        soma2+=vetor[n];
        }
        if(soma!=soma2){
            p++;
            soma2=0;
        }
        else break;

    }
    if(soma==soma2)
    printf("a posicao p e: %d\n\n", p);
    else printf("\n-1\n\n");
    return 0;
}

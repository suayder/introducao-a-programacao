#include <stdio.h>
#include <stdlib.h>
void crescente(int *vet, int p, int *ordem){
    int  cont=1, i;
    for(i=0;i<p;i++){

           if((vet[i]+1)==vet[i+1]){
               cont++;
           }
           else{
            if(*ordem<cont)*ordem=cont;
            cont=1;
           }
        }

    }
int decrecente(int *vet, int p, int *ordem){
    int cont=1, i;
    for(i=(p-1);i>=0;i--){
        if((vet[i]+1)==vet[i-1]){

            cont++;
        }

        else{
            if(*ordem<cont)*ordem=cont;
            cont=1;
        }
    }

}

int main()
{
    int *vet, p, i, ordem=1;
    printf("digite o tamanho do vetor: ");
    scanf("%d", &p);
    vet=(int*) calloc(p, sizeof (int*));
    printf("os valores do vetor: ");
    for(i=0;i<p;i++){
        scanf("%d", &vet[i]);
    }
    crescente(vet, p, &ordem);
    decrecente(vet, p, &ordem);
    printf("\na maior ordem e  de %d numeros consecutivos", ordem);

    return 0;
}

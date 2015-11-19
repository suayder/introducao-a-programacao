#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=0, i;
    printf("digite o numero: ");
    scanf("%d", & num);
    i=num;
    do{
        if(num%i==0){
            cont++;
        }
        i--;
    }while(i>=1);
    if(cont==2 || cont==1){
        printf("o numero e primo\n");
        }
    else{
        printf("o numero nao e primo\n");
        }
}

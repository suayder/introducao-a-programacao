#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, div, soma=0, num2;
    printf("digite o numero: ");
    scanf("%d", &num);
    div=num;
    do{
        if(num%div==0){
            num2= num/div;
            soma+=num2;
        }
        div--;
    }while(div>=2);
    if(soma==num){
        printf("o numero e perfeito!\n");
        }
    else{
        printf("o numero nao e perfeito!\n");
        }
    return 0;
}

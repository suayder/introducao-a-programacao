#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, num, i=4,num2, r=0, cont=1;
    printf("digite o primeiro valor:");
    scanf("%d", &num);
    while(i>0){
        printf("digite o proximo valor:");
        scanf("%d", &num2);
        t=num-num2;
        if(t<0) t=t*(-1);
        num=num2;
        r=r-t;
        if(r<0) r=r*(-1);
        if(r==0) cont++;
        i--;
    }
    if(cont==3){
        printf("eh uma saquencia de pa");
        }
    else{
        printf("nao eh uma sequencia de pa");
        }
}

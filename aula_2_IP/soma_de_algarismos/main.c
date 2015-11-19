#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, soma=0, r;
    printf("digite o numero: ");
    scanf("%d", &n);
    while(n>9){
        r=n%10;
        soma+=r;
        n=(n-r)/10;
    }
    soma+=n;
    printf("a soma e %d\n", soma);
    return 0;
}

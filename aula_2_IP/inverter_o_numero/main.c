#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, r, num=0, num1;
    printf("digite o numero: ");
    scanf("%d", &n);

    while(n>9){

        r=n%10;
        num1=num+r;
        n=(n-r)/10;
        //num=(r*10);
        num1*=10;
        num=num1;

    }
    num1+=n;
    printf("%d", num1);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=2, n, n1=1, n2=1, t;
   printf("digite o termo: ");
   scanf("%i", & n);
   printf("%d ",n1);
   printf("%d ",n2);
   while(i<n){
    t=n1+n2;
    n1=n2;
    n2=t;
    i++;
       printf("%d ",t);
   }

}

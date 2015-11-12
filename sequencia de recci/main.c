#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i=2, n, n1, n2, t=1;
   printf("digite o termo: ");
   scanf("%i", & n);
   printf("Informe os dois primeiros valores \n");
   scanf("%d %d",&n1,&n2);
   //printf("%d ",n1);
  // printf("%d ",n2);
   while(i<n){
    t=n1+n2;
    n1=n2;
    n2=t;
    i++;
     //  printf("%d ",t);
   }
 printf("%d ",t);
}

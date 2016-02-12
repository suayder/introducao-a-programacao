#include <stdio.h>
#include <stdlib.h>

int main()
{
   int jose[10],joaquin[10], i , j, var[5], var2[5], b=0,a=0, cont=0;

    printf("o numero: ");
   for (i=0;i<10;i++){
        scanf("%d", &jose[i]);
   }
   printf("\n\no numero: ");
   for(i=0; i<10;i++){

        scanf("%d", &joaquin[i]);
    }
    for(i=0;i<10;i++){
        for(j=1;j<10;j++){
            if(jose[i]==jose[j]){
                var[a]=jose[i];
                a++;
            }
            if(joaquin[i]==joaquin[j]){
                var2[b]=joaquin[i];
                b++;
            }
        }
    }
    if(a<=b){
        for(;a>=0;a--){
            for(;b>=0;b--){
                if(var[a]!=var2[b]){
                    cont++;
                }
            }
        }
    }
    else{
         for(;a>=0;a--){
            for(;b>=0;b--){
                if(var[a]!=var2[b]){
                    cont++;
                }
            }
        }
    }
    printf("\n\n\n%d", cont);
    return 0;
}

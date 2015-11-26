#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, j=0, l, c, tc=0;
    printf("digite o numero de bandeja: ");
    scanf("%d", &n);
    for (;n>0;n--){
        j++;
        printf("o numero de latas e o numero de copos da bandeja %d:\n", j);
        scanf("%d %d", &l, &c);
        if(l>c){
            tc+=c;
        }
    }
    printf("o total de copos quebrados eh %d\n\n", tc);

    return 0;
}

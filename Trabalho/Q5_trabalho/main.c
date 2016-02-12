#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     float l,c, r1, r2, d, h; //largura, comprimento, raio 1, raio 2, diâmetro e hipotenusa
        printf("entre com a largura, comprimento e os raios:\n");
        scanf("%f %f %f %f", &l, &c, &r1, &r2);
        while(!(l==0 && c==0 && r1==0 && r2==0)){ //flag para parar o laço
            d=0;
            h=0;
            while(l<=0 || l>100 || c<=0 || c>100 || r1<0 || r1>100 || r2<0 || r2>100){ //Condição para se algum dos tamanhos forem inválidos
                printf("numeros inválidos, digite novamente:\n");
                scanf("%f %f %f %f", &l, &c, &r1, &r2);
            }
            d=2*r1+2*r2; //calculo dos diametros
            h=abs(sqrt((l*l)+(c*c))); //calculo da hipotenusa
            if(d<h || d<c || d<l){ //condição para resultado final
                printf("S\n");
                }
            else{
            printf("N\n");
            }
            printf("entre com a largura, comprimento e os raios:\n");
            scanf("%f %f %f %f", &l, &c, &r1, &r2);

        }


    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int h1, m1, h2, m2, mf;
    printf("digite a hora e o minuto inicial em seguida a hora final e minuto final:\n");
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

    while(!(h1==0 && m1==0 && h2==0 && m2==0)){ //flag para parada quando for digitado 0 0 0 0
        while(h1<0 || h1>23 || m1<0 || m1>59 || h2<0 || h2>23 || m2<0 || m2>59){ //condição para os numeros serem vaĺidos
            printf("digite a horas e o minutos validos:\n");
            scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
        }
        if(m1<=m2 && h1<=h2){
            mf=(m2-m1)+(h2-h1)*60;
        }
        else if(m1<=m2 && h1>h2){
            mf=(m2-m1)+((h2+24)-h1)*60;
            }
        else if(m1>m2 && h1<=h2){
            mf=((m2+1440)-m1)+(h2-h1)*60;
            }
        else if(m1>m2 && h1>h2){
           mf=((60-m1)+m2)+abs((h2+23)-h1)*60;
        }

        printf("o tempo em minutos eh: %d\n\n", mf);
        printf("digite a hora e o minuto inicial em seguida a hora final e minuto final:\n");
        scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

        }

    printf("\n");
    return 0;
}

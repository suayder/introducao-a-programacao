#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mi, mf;
    int t=0,  th, tm, ts;
    printf("digite a massa: ");
    scanf("%f", &mi);
    mf=mi;
    while(mf>=0.5){
        mf/=2;
        t+=50;
    }
    th=t/3600; //tempo em horas
    tm=(t%3600)/60; //tempo em minutos
    ts=(t%3600)-60*tm;
    //printf("%dh %dm %ds", th, tm, ts);
    printf("a massa inicial eh %.2f, a final eh %.2f e o tempo gasto eh %dh %dm %ds\n\n", mi, mf, th, tm, ts);
    return 0;
}

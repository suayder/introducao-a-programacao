#include <stdio.h>
#include <stdlib.h>

float cf(float celcius){
    float farenhait;
    farenhait=(celcius/5)*9+32;
    printf("%.2f graus F\n\n", farenhait);
    return 0;
}
float fc(float farenhait){
    float celcius;
    celcius=((farenhait-32)/9)*5;
    printf("%f graus C", celcius);
    return 0;
}
int main()
{
    int op;
    float a;
    printf("1 - celcius-farenhait\n2 - farenhait-celcius\n:");
    scanf("%i", &op);
    switch(op){
        case 1:
            printf("digite os graus celcius: ");
            scanf("%f", &a);
            cf(a);
            break;
        case 2:
            printf("digite os graus farenhait: ");
            scanf("%f", &a);
            fc(a);
            break;
    }
}

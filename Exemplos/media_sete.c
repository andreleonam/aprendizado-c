#include <stdio.h>

int main(void){

    double av1, av2, media;

    printf("digite a nota AV1: ");
    scanf("%lf", &av1);
    
    printf("digite a nota AV2: ");
    scanf("%lf", &av2);

    media = (av1 + av2)/2;

    printf("media: %.2lf", media);

    if (media >= 7)
    {
        printf("\naprovado");
    }
    else
    {
        printf("\nreprovado");
    }
    

    return 0;

}
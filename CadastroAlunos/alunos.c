#include <stdio.h>
#include <string.h>

int main(void){

    int matricula01, matricula02, matricula03;
    char nome01[50], nome02[50], nome03[50];
    int idade01, idade02, idade03;
    float altura01, altura02, altura03;

    float media_idade;
    float media_altura;

    printf("Informe os dados do primeiro aluno\n");

    printf("Matricula: ");
    scanf("%i", &matricula01);
    getchar();  // ← consome o \n

    printf("Nome: ");
    fgets(nome01, sizeof(nome01), stdin);
    nome01[strcspn(nome01, "\n")] = '\0';
    
    printf("Altura: ");
    scanf("%f", &altura01);
    getchar();  // ← consome o \n

    printf("Idade: ");
    scanf("%i", &idade01);
    getchar();  // ← consome o \n

    printf("\n");
    printf("Informe os dados do segundo aluno\n");
    printf("Matricula: ");
    scanf("%i", &matricula02);
    getchar();  // ← consome o \n

    printf("Nome: ");
    fgets(nome02, sizeof(nome02), stdin);
    nome02[strcspn(nome02, "\n")] = '\0';
    
    printf("Altura: ");
    scanf("%f", &altura02);
    getchar();  // ← consome o \n

    printf("Idade: ");
    scanf("%i", &idade02);
    getchar();  // ← consome o \n

    printf("\n");
    printf("Informe os dados do terceiro aluno\n");
    printf("Matricula: ");
    scanf("%i", &matricula03);
    getchar();  // ← consome o \n

    printf("Nome: ");
    fgets(nome03, sizeof(nome03), stdin);
    nome03[strcspn(nome03, "\n")] = '\0';
    
    printf("Altura: ");
    scanf("%f", &altura03);
    getchar();  // ← consome o \n
    
    printf("Idade: ");
    scanf("%i", &idade03);
    getchar();  // ← consome o \n

    /*
    altura01 = 1.80;
    altura02 = 2.00;
    altura03 = 1.90;

    idade01 = 20;
    idade02 = 25; 
    idade03 = 31;
    */

    media_altura = (altura01 + altura02 + altura03) / 3.0;
    media_idade = (idade01 + idade02 + idade03) / 3.0;

    printf("\nMedia Idade: %.2f anos\n", media_idade);
    printf("Media Altura: %.2fm\n", media_altura);

    return 0;
}
#include <stdio.h>
#include <math.h>

// protótipos
void lerNumeros(double *a, double *b);
void lerNumerosInteiros(int *a, int *b);

int main()
{

    int opcao, num_int01, num_int02, operacao_int;
    double num01, num02, operacao;

    do
    {

        printf("\n\nCALCULADORA\n\n");
        printf("Escolha a operação\n\n");
        printf("1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Resto\n");
        printf("6 - Exponenciação\n");
        printf("7 - Radiciação\n");
        printf("8 - Maior de tres numeros inteiros\n");
        printf("0 - Sair\n");
        printf("\nOpção: ");
        scanf("%i", &opcao);
        getchar(); // ← consome o \n

        switch (opcao)
        {

        case 0:
            printf("Encerrando...\n");
            break;

        case 1:
            lerNumeros(&num01, &num02);

            operacao = num01 + num02;

            printf("\nResultado da Adição: %lf", operacao);
            break;

        case 2:
            lerNumeros(&num01, &num02);

            operacao = num01 - num02;

            printf("\nResultado da Subtração: %lf", operacao);
            break;

        case 3:
            lerNumeros(&num01, &num02);

            operacao = num01 * num02;

            printf("\nResultado da Multiplicação: %lf", operacao);
            break;

        case 4:
            lerNumeros(&num01, &num02);

            if (num01 == 0 && num02 == 0)
            {
                printf("Resultado indeterminado (0/0)\n");
            }
            else if (num02 == 0)
            {
                printf("Erro: divisao por zero\n");
            }
            else
            {
                operacao = num01 / num02;
                printf("\nResultado da Divisao: %lf", operacao);
            }

            break;

        case 5:

            lerNumerosInteiros(&num_int01, &num_int02);

            if (num_int01 == 0 && num_int02 == 0)
            {
                printf("Resultado indeterminado (0/0)\n");
            }
            else if (num_int02 == 0)
            {
                printf("Erro: divisao por zero\n");
            }
            else
            {
                operacao_int = num_int01 % num_int02;
                printf("\nO resto da divisao: %i", operacao_int);
            }

            break;

        case 6:
            printf("Observação: Primeiro numero é a base, o segundo numero é o expoente!\n");

            lerNumerosInteiros(&num_int01, &num_int02);

            operacao_int = num_int01;

            if (num_int02 == 0 && num_int01 == 0)
            {
                printf("\nResultado da Exponenciação é indeterminado");
            }
            else if (num_int02 == 0)
            {
                operacao_int = 1;
            }
            else
            {
                for (int i = 1; i <= (num_int02 - 1); i++)
                {
                    operacao_int = operacao_int * num_int01;
                }
            }

            printf("\nResultado da Exponenciação: %i", operacao_int);
            break;

        case 7:
            printf("Observação: Primeiro numero é o radicando, o segundo numero é o radical!\n");

            lerNumeros(&num01, &num02);

            if (num02 == 0)
            {
                printf("Erro: radical nao pode ser zero\n");
            }
            else
            {
                operacao = pow(num01, 1.0 / num02);
                printf("\nResultado da Radiciacao: %lf", operacao);
            }
            break;

        case 8:
            int n1, n2, n3, maior;

            lerNumerosInteiros(&n1, &n2);

            printf("Terceiro: ");
            scanf("%i", &n3);

            maior = n1;

            if (n2 > maior)
                maior = n2;

            if (n3 > maior)
                maior = n3;

            printf("O maior numero é: %i", maior);

            break;

        default:
            printf("Opção inválida\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}

void lerNumeros(double *a, double *b)
{
    printf("Informe os Numeros\n");

    printf("Primeiro: ");
    scanf("%lf", a);

    printf("Segundo: ");
    scanf("%lf", b);
}

void lerNumerosInteiros(int *a, int *b)
{
    printf("Informe os Numeros Inteiros\n");

    printf("Primeiro: ");
    scanf("%i", a);

    printf("Segundo: ");
    scanf("%i", b);
}
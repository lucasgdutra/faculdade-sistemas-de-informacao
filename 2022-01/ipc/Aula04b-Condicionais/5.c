#include <stdio.h>

// Usando um comando switch, escreva um
// programa que leia um inteiro entre 1 e 7 e
// imprima o dia da semana correspondente a esse
// número. Isto é, domingo, se 1, segunda-feira, se 2,
// e assim por diante. Utilize a opção default para
// imprimir a seguinte mensagem caso o valor não
// esteja na faixa entre 1 e 7:
// “Número deve ser entre 1 e 7. Sinto muito!

int main()
{
    int entrada;
    scanf("%d", &entrada);

    switch (entrada)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda");
        break;
    case 3:
        printf("Terça");
        break;
    case 4:
        printf("Quarta");
        break;
    case 5:
        printf("Quinta");
        break;
    case 6:
        printf("Sexta");
        break;
    case 7:
        printf("Sabado");
        break;

    default:
        printf("Número deve ser entre 1 e 7. Sinto muito!");
        break;
    }

    return 0;
}
#include <stdio.h>

// Faça um programa que leia um número inteiro e
// escreva se ele é par ou impar

int main()
{
    int entrada;
    scanf("%d", &entrada);
    if (entrada % 2 == 0)
    {
        printf("par");
    }
    else
    {
        printf("impar");
    }

    return 0;
}
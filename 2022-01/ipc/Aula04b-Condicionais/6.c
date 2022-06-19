#include <stdio.h>

// Escreva um programa que, dada a idade de um
// nadador, classifique-o em uma das seguintes
// categorias:

// Categoria Idade
// Infantil A 5-7
// Infantil B 8-10
// Juvenil A 11-13
// Juvenil B 14-17
// Sênior maiores que 18 anos

int main()
{
    int idade;
    scanf("%d", &idade);
    if (idade < 5)
    {
        printf("sem categoria");
        return 0;
    }
    if (idade >= 5 && idade <= 7)
    {
        printf("Infantil A");
        return 0;
    }
    if (idade >= 8 && idade <= 10)
    {
        printf("Infantil B");
        return 0;
    }
    if (idade >= 11 && idade <= 13)
    {
        printf("Juvenil A");
        return 0;
    }
    if (idade >= 14 && idade <= 17)
    {
        printf("Juvenil B");
        return 0;
    }
    printf("Sênior");
    return 0;
}
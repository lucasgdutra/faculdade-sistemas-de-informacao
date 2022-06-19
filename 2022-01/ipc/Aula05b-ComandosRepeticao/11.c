#include <stdio.h>

// Escreva um programa exiba a soma dos números
// naturais menores que 1000 que são múltiplos de
// 3 ou que são múltiplos de 5.

// Nota: os números naturais são números inteiros
// positivos N = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
// 12...}


int main(int argc, char *argv[])
{
    int soma = 0;
    for (int i = 1; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            soma += i;
        }
    }
    printf("soma: %d", soma);
    return 0;
}
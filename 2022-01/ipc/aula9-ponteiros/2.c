#include <stdio.h>

// Crie um programa que contenha um vetor de inteiros contendo cinco elementos. Utilizando apenas aritmética de ponteiros, leia esse vetor do teclado e imprima o dobro de cada valor lido.

int main(int argc, char *argv[])
{
    int vetor[5];
    printf("insira os 5 valores para o vetor\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", vetor + i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("vetor[%d] = %d\n", i, *(vetor + i) * 2);
    }

    return 0;
}
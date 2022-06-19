#include <stdio.h>

// Crie um programa que contenha um vetor estático e um vetor dinâmico de float contendo 10 elementos cada. Imprima o endereço e o conteúdo de cada posição desses vetores.

int main(int argc, char *argv[])
{
    int n;
    float vetor1[10];
    float *vetor2;
    vetor2 = malloc(sizeof(float) * 10);

    printf("insira os valores para o vetor 1\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", &vetor1[i]);
    }

    printf("insira os valores para o vetor 2\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%f", vetor2 + i);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("vetor 1, posição %d = %f\n", i, vetor1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("vetor 2, posição %d = %f\n", i, *(vetor2 + i));
    }

    free(vetor2);

    return 0;
}
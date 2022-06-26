/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

#include <stdio.h>
#include <stdlib.h>

// 1) Escreva um programa para calcular a multiplicação de uma matriz A por uma matriz
// B alocadas dinamicamente. As dimensões das matrizes e os valores das matrizes A e B
// devem ser lidos do teclado. A matriz resultado também deve ser alocada
// dinamicamente. Imprima as matrizes de entrada e a matriz resultante. Ao final,
// desaloque as matrizes.

int main()
{
    int **matrizA, **matrizB, **matrizResultado;
    int linhaA, colunaA, linhaB, colunaB;

    printf("Insira a quantidade de linhas da matriz A\n");
    scanf("%d", &linhaA);

    printf("Insira a quantidade de colunas da matriz A\n");
    scanf("%d", &colunaA);

    printf("Insira a quantidade de linhas da matriz B\n");
    scanf("%d", &linhaB);

    printf("Insira a quantidade de colunas da matriz A\n");
    scanf("%d", &colunaB);

    if (colunaA != linhaB)
    {
        printf("Não é possível multiplicar as matrizes A e B pois a quantidade de colunas de A é diferente da quantidade de linhas de B\n");
        return 0;
    }

    // alocação da matriz A
    matrizA = malloc(sizeof(int *) * linhaA);
    for (int i = 0; i < linhaA; i++)
    {
        matrizA[i] = malloc(sizeof(int) * colunaA);
    }

    // alocação da matriz B
    matrizB = malloc(sizeof(int *) * linhaB);
    for (int i = 0; i < linhaB; i++)
    {
        matrizB[i] = malloc(sizeof(int) * colunaB);
    }

    // alocação das colunas matriz resultado
    matrizResultado = malloc(sizeof(int *) * linhaA);
    for (int i = 0; i < linhaA; i++)
    {
        matrizResultado[i] = malloc(sizeof(int) * colunaB);
    }

    // leitura das entradas da matriz A
    printf("Insira os %d valores da matriz A\n", linhaA * colunaA);
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaA; j++)
        {
            scanf("%d", &matrizA[i][j]);
        }
    }
    // leitura das entradas da matriz B
    printf("Insira os %d valores da matriz B\n", linhaB * colunaB);
    for (int i = 0; i < linhaB; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            scanf("%d", &matrizB[i][j]);
        }
    }

    // multiplicação das matrizes
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            int soma = 0;
            for (int k = 0; k < colunaA; k++)
            {
                soma += matrizA[i][k] * matrizB[k][j];
            }
            matrizResultado[i][j] = soma;
        }
    }

    // impressão da matriz A
    printf("matriz A\n");
    for (int i = 0; i < linhaA; i++)
    {
        printf("|");
        for (int j = 0; j < colunaA; j++)
        {
            printf("%4d ", matrizA[i][j]);
        }
        printf("|\n");
    }

    // impressão da matriz B
    printf("matriz B\n");
    for (int i = 0; i < linhaB; i++)
    {
        printf("|");
        for (int j = 0; j < colunaB; j++)
        {
            printf("%4d ", matrizB[i][j]);
        }
        printf("|\n");
    }

    // impressão da matriz Resultado
    printf("matriz Resultado\n");
    for (int i = 0; i < linhaA; i++)
    {
        printf("|");
        for (int j = 0; j < colunaB; j++)
        {
            printf("%4d ", matrizResultado[i][j]);
        }
        printf("|\n");
    }

    // desalocação da matriz A
    for (int i = 0; i < linhaA; i++)
    {
        free(matrizA[i]);
    }
    free(matrizA);

    // desalocação da matriz B
    for (int i = 0; i < linhaB; i++)
    {
        free(matrizB[i]);
    }
    free(matrizB);

    // desalocação da matriz resultado
    for (int i = 0; i < linhaA; i++)
    {
        free(matrizResultado[i]);
    }
    free(matrizResultado);

    return EXIT_SUCCESS;
}
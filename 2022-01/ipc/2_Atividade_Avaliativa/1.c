#include <stdio.h>
#include <stdlib.h>

// 1) Escreva um programa que leia duas matrizes e apresente a multiplicação delas. O
// programa deve perguntar as dimensões das matrizes, verificar se são compatíveis, ler os
// valores e apresentar os resultados

int main(int argc, char *argv[])
{
    int linhas1, colunas1, linhas2, colunas2;
    int **matriz1, **matriz2, **matrizResultado;

    printf("Digite a quantidade de linhas da matriz 1: ");
    scanf("%d", &linhas1);
    printf("Digite a quantidade de colunas da matriz 1: ");
    scanf("%d", &colunas1);

    printf("Digite a quantidade de linhas da matriz 2: ");
    scanf("%d", &linhas2);
    printf("Digite a quantidade de colunas da matriz 2: ");
    scanf("%d", &colunas2);

    if (colunas1 != linhas2)
    {
        printf("A quantidade de colunas da matriz 1 e linhas da matriz 2 devem ser o mesmo\n");
        return 0;
    }
    matriz1 = malloc(sizeof(int *) * linhas1);
    matriz2 = malloc(sizeof(int *) * linhas2);
    matrizResultado = malloc(sizeof(int *) * linhas1);

    // alocação matriz 1
    for (int i = 0; i < linhas1; i++)
    {
        matriz1[i] = malloc(sizeof(int) * colunas1);
    }
    // alocação matriz 2
    for (int i = 0; i < linhas2; i++)
    {
        matriz2[i] = malloc(sizeof(int) * colunas2);
    }
    // alocação matriz resultado
    for (int i = 0; i < linhas1; i++)
    {
        matrizResultado[i] = malloc(sizeof(int) * colunas2);
    }
    // leitura matriz1
    printf("Digite os %d valores para matriz%d: ", linhas1 * colunas1, 1);
    for (int i = 0; i < linhas1; i++)
    {
        for (int j = 0; j < colunas1; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // leitura matriz2
    printf("Digite os %d valores para matriz%d: ", linhas2 * colunas2, 2);
    for (int i = 0; i < linhas2; i++)
    {
        for (int j = 0; j < colunas2; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // multiplicação
    for (int i = 0; i < linhas1; i++)
    {
        for (int j = 0; j < colunas2; j++)
        {
            int soma = 0;
            for (int k = 0; k < colunas1; k++)
            {
                soma += matriz1[i][k] * matriz2[k][j];
            }
            matrizResultado[i][j] = soma;
        }
    }

    // impressão matriz resultado
    printf("Matriz resultado: \n");
    for (int i = 0; i < linhas1; i++)
    {
        for (int j = 0; j < colunas2; j++)
        {
            printf("%3d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    // desalocação matriz 1
    for (int i = 0; i < linhas1; i++)
    {
        free(matriz1[i]);
    }
    free(matriz1);

    // desalocação matriz 2
    for (int i = 0; i < linhas2; i++)
    {
        free(matriz2[i]);
    }
    free(matriz2);

    return 0;
}
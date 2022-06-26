/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 5) Escreva um programa que aloque dinamicamente um cubo tri-dimensional de
// profundidade 5, largura 6 e altura 7 de números inteiros. Utilize repetições para facilitar
// a alocação a atribuição de valores. Atribua números aleatórios (ou pseudo-aleatórios) a
// todas as células do cubo (veja como gerar números aleatórios em
// https://cplusplus.com/reference/cstdlib/rand/). Em seguida, apresente (imprima) as 5
// matrizes de 6 linhas e 7 colunas e libere a memória alocada dinamicamente.

int main()
{
    int ***cubo;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // alocação
    cubo = (int ***)malloc(sizeof(int **) * 5);
    if (cubo == NULL)
    {
        printf("Erro ao alocar o cubo\n");
        return 1;
    }
    for (int i = 0; i < 5; i++)
    {
        cubo[i] = (int **)malloc(sizeof(int *) * 6);
        if (cubo[i] == NULL)
        {
            printf("Erro ao alocar o cubo[%d]\n", i);
            return 1;
        }
        for (int j = 0; j < 6; j++)
        {
            cubo[i][j] = (int *)malloc(sizeof(int) * 7);
            if (cubo[i][j] == NULL)
            {
                printf("Erro ao alocar o cubo[%d][%d]\n", i, j);
                return 1;
            }
        }
    }

    // atribuição de valores
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                cubo[i][j][k] = rand() % 100;
            }
        }
    }

    // imprime as matrizes
    for (int i = 0; i < 5; i++)
    {
        printf("Matriz %d\n", i + 1);
        for (int j = 0; j < 6; j++)
        {
            printf("|");
            for (int k = 0; k < 7; k++)
            {
                printf("%4d ", cubo[i][j][k]);
            }
            printf("|");
            printf("\n");
        }
        printf("\n");
    }

    // desalocação
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            free(cubo[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        free(cubo[i]);
    }

    free(cubo);

    return EXIT_SUCCESS;
}
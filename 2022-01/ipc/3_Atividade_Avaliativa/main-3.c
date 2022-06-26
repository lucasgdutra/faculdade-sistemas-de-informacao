/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

#include <stdio.h>
#include <stdlib.h>

// 3) O determinante de uma matriz pode ser empregado para verificar, entre outras
// aplicações, se três pontos estão alinhados no plano cartesiano, para calcular áreas de
// triângulos, para resolução de sistemas lineares. Calcula-se o determinante somente de
// matrizes quadradas.
// O determinante de uma matriz A (2x2) é calculado conforme o exemplo:
// 𝐴 = ቀ1 5 2 3ቁ det(𝐴) = ቚ1 5 2 3ቚ = 1 × 3 − 5 × 2 = −7
// Escreva um programa que leia uma matriz 2x2 alocada dinamicamente, calcule e
// imprima o determinante, e antes de encerrar desaloque a matriz.

int main()
{
    int **matriz;
    int determinante;

    // alocação
    matriz = (int **)malloc(sizeof(int *) * 2);
    for (int i = 0; i < 2; i++)
    {
        matriz[i] = (int *)malloc(sizeof(int) * 2);
    }

    // leitura da matriz
    printf("Insira os %d valores da matriz\n", 2 * 2);
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // calculo do determinante
    determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);

    // imprime o determinante
    printf("O determinante da matriz é %d\n", determinante);

    // desalocação da matriz
    for (int i = 0; i < 2; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return EXIT_SUCCESS;
}
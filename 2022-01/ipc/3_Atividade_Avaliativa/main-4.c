/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

#include <stdio.h>
#include <stdlib.h>

// 4) O determinante de uma matriz 3x3 é calculado pela Regra de Sarrus, que consiste em
// copiar as duas primeiras colunas da matriz para as colunas 4 e 5 e calcular a soma dos
// produtos das três diagonais que estão no sentido da diagonal principal e subtrair os
// produtos das três diagonais que estão no sentido da diagonal secundária.
// 𝐵 = ൭10 4 2 1 9 5 3 7 8൱ det(𝐵) = อ10 4 2 1 9 5 3 7 8อ 10 4 1 9 3 7อ
// det(𝐵) = 1 × 7 × 2 + 9 × 8 × 10 + 5 × 3 × 4 − 5 × 7 × 10 − 1 × 8 × 4 − 2 × 3 × 9
// det(𝐵) = 14 + 720 + 60 − 350 − 32 − 54 = 358
// Escreva um programa que leia uma matriz 3x3 alocada dinamicamente, calcule e
// imprima o determinante, e antes de encerrar desaloque a matriz.
/*
A =
    | a[0][0] a[0][1] a[0][2] | a[0][0] a[0][1] |
    | a[1][0] a[1][1] a[1][2] | a[1][0] a[1][1] |
    | a[2][0] a[2][1] a[2][2] | a[2][0] a[2][1] |
det A = (a[0][0] * a[1][1] * a[2][2]) + (a[0][1] * a[1][2] * a[2][0]) + (a[0][2] * a[1][0] * a[2][1]) - (a[0][2] * a[1][1] * a[2][0]) - (a[0][0] * a[1][2] * a[2][1]) - (a[0][1] * a[1][0] * a[2][2])
*/

int main()
{

    int **matriz;
    int determinante;

    // alocação
    matriz = (int **)malloc(sizeof(int *) * 3);
    for (int i = 0; i < 3; i++)
    {
        matriz[i] = (int *)malloc(sizeof(int) * 3);
    }

    // leitura da matriz
    printf("Insira os %d valores da matriz\n", 3 * 3);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    // calcula determinante
    determinante = (matriz[0][0] * matriz[1][1] * matriz[2][2]) + (matriz[0][1] * matriz[1][2] * matriz[2][0]) + (matriz[0][2] * matriz[1][0] * matriz[2][1]) - (matriz[0][2] * matriz[1][1] * matriz[2][0]) - (matriz[0][0] * matriz[1][2] * matriz[2][1]) - (matriz[0][1] * matriz[1][0] * matriz[2][2]);

    // imprime determinante
    printf("O determinante da matriz é %d\n", determinante);

    // desalocação da matriz
    for (int i = 0; i < 3; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return EXIT_SUCCESS;
}
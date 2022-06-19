#include <stdio.h>
#include <stdlib.h>

// 4) (Adaptada de PUC-SP) Dadas as matrizes A = (aij) e B = (bij), quadradas de ordem 2,
// com aij = 3i + 4j e bij = - 4i - 3j. Considerando C = A + B, calcule a matriz C. Escreva
// um programa que declare as matrizes, e calcule as matrizes A e B com base nas
// equações propostas (aij = 3i + 4j e bij = - 4i - 3j). Em seguida, o programa deve calcular
// a matriz C e imprimir as matrizes A, B e C

int main()
{
    int matriz_A[2][2], matriz_B[2][2], matriz_C[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matriz_A[i][j] = (3 * (i + 1)) + (4 * (j + 1));
            matriz_B[i][j] = (-4 * (i + 1)) + (-3 * (j + 1));
            matriz_C[i][j] = matriz_A[i][j] + matriz_B[i][j];
        }
    }
    printf("Matriz A: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for (int j = 0; j < 2; j++)
        {
            printf("%3d ", matriz_A[i][j]);
        }
        printf("| \n");
    }
    printf("Matriz B: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for (int j = 0; j < 2; j++)
        {
            printf("%3d ", matriz_B[i][j]);
        }
        printf("| \n");
    }
    printf("Matriz C: \n");
    for (int i = 0; i < 2; i++)
    {
        printf("| ");
        for (int j = 0; j < 2; j++)
        {
            printf("%3d ", matriz_C[i][j]);
        }
        printf("| \n");
    }
    return EXIT_SUCCESS;
}
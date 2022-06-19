#include <stdio.h>
#include <stdlib.h>
// Escreva um programa para calcular a multiplicação de uma matriz 2x3 por uma matriz 3x4 alocadas dinamicamente.
// A matriz resultado também deve ser alocada dinamicamente.

// Imprima as matrizes de entrada e a matriz resultante.
// Ao final, desaloque as matrizes.

// Algoritmo

// Atribuir zero para todas as posições da matriz resultado AB
// Para i de 0 até linhasA
//  Para j de 0 até colunasB
//      Para k de 0 até colunasA
//          AB[i,j]  AB[i,j] + A[i,k] * B[k,j]
//      fim-para
//  fim-para
// fim-para

// regras da multiplicacao de matrizes
// quantidade de linhas de A = quantidade de colunas de B
// matriz resultado tem a mesma quantidade de linhas de A e colunas de B

int main(int argc, char *argv[])
{
    int **matriz1, **matriz2, **matrizResultado;

    matriz1 = malloc(sizeof(int) * 2);
    matriz2 = malloc(sizeof(int) * 3);
    matrizResultado = malloc(sizeof(int) * 2);

    // leitura matriz1
    printf("Insira %d valores para a Matriz 1:\n", 2 * 3);
    for (int i = 0; i < 2; i++)
    {
        matriz1[i] = malloc(sizeof(int) * 3);
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz1[i][j]);
        }
    }

    // leitura matriz2
    printf("Insira %d valores para a Matriz 2:\n", 3 * 4);
    for (int i = 0; i < 3; i++)
    {
        matriz2[i] = malloc(sizeof(int) * 4);
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }

    // alocação matriz resultado
    for (int i = 0; i < 2; i++)
    {
        matrizResultado[i] = malloc(sizeof(int) * 4);
    }

    // multiplicação
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            matrizResultado[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }

    // imprime matriz1
    printf("Matriz 1:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%3d ", matriz1[i][j]);
        }
        printf("\n");
    }
    // imprime matriz2
    printf("\nMatriz 2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", matriz2[i][j]);
        }
        printf("\n");
    }
    // imprime matrizResultado
    printf("\nMatriz Resultado:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%3d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    // liberação memória matriz1
    for (int i = 0; i < 2; i++)
    {
        free(matriz1[i]);
    }
    free(matriz1);

    // liberação memória matriz2
    for (int i = 0; i < 3; i++)
    {
        free(matriz2[i]);
    }
    free(matriz2);

    // liberação memória matrizResultado
    for (int i = 0; i < 3; i++)
    {
        free(matrizResultado[i]);
    }
    free(matrizResultado);
    return 0;
}
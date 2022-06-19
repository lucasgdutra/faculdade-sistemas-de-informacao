#include <stdio.h>

// Escreva um programa que leia um valor inteiro N maior que zero.
// Se o valor de N for inválido, o usuário deve digitar outro até que ele seja válido.
// Em seguida, crie uma matriz N por N alocada dinamicamente.
// Atribua o valor 1 para a diagonal principal e zero para as demais posições.
// Imprima a matriz.

int main(int argc, char *argv[])
{
    int n;
    printf("insira o valor de n\n");
    while (1)
    {
        scanf("%d", &n);
        if (n > 0)
        {
            break;
        }
        else
        {
            printf("n deve ser maior que zero\n");
        }
    }

    int **matriz;

    matriz = malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        matriz[i] = malloc(sizeof(int) * n);
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                matriz[i][j] = 1;
            }
            else
            {
                matriz[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
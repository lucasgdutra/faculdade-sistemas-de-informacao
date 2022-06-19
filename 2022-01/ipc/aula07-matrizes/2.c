#include <stdio.h>

int main()
{
    int linhas, colunas;
    printf("Entre com a quantidade de linhas para as matrizes\n");
    scanf("%d", &linhas);

    printf("Entre com a quantidade de colunas para as matrizes\n");
    scanf("%d", &colunas);

    int mat[linhas][colunas], vetor[colunas], vetor_resultado[linhas];

    printf("entre com os %d valores para matriz\n", linhas * colunas);
    // leitura matriz
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("entre com os %d valores para o vetor\n", colunas);
    // leitura vetor
    for (int j = 0; j < colunas; j++)
    {
        scanf("%d", &vetor[j]);
    }

    // escrita vetor final
    for (int i = 0; i < linhas; i++)
    {
        vetor_resultado[i] = 0;
        for (int j = 0; j < colunas; j++)
        {
            vetor_resultado[i] += mat[i][j] * vetor[j];
        }
    }

    // imprime vetor final
    for (int i = 0; i < linhas; i++)
    {
        printf("%3d | ", vetor_resultado[i]);
    }
    printf("\n");

    return 0;
}
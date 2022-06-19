#include <stdio.h>

int main()
{
    int linhas, colunas;
    printf("Entre com a quantidade de linhas para as matrizes\n");
    scanf("%d", &linhas);

    printf("Entre com a quantidade de colunas para as matrizes\n");
    scanf("%d", &colunas);

    int mat1[linhas][colunas], mat2[linhas][colunas], mat3[linhas][colunas];

    printf("entre com os %d valores para mat1\n", linhas * colunas);
    // leitura mat1
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("entre com os %d valores para mat2\n", linhas * colunas);
    // leitura mat2
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // escrita mat3
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // imprime mat3
    for (int i = 0; i < linhas; i++)
    {
        printf("----------------\n");
        for (int j = 0; j < colunas; j++)
        {
            printf("%3d | ", mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
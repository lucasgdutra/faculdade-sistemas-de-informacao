#include <stdio.h>

// Condição da existência do produto
// Para que haja a multiplicação de matrizes A⋅B  , necessariamente o número de colunas de A deve ser igual ao número de linhas de B

int main()
{

    int colunaAlinhaB, colunaB, linhaA;
    printf("insira a quantidade de colunas para mat1 / numero de linhas para mat2\n");
    scanf("%d", &colunaAlinhaB);

    printf("insira a quantidade de linhas para mat1\n");
    scanf("%d", &linhaA);

    printf("insira a quantidade de colunas para mat2\n");
    scanf("%d", &colunaB);

    int mat1[linhaA][colunaAlinhaB], mat2[colunaAlinhaB][colunaB], mat3[linhaA][colunaB];

    // leitura de mat1
    printf("insira os %d valores para mat1\n", linhaA * colunaAlinhaB);
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaAlinhaB; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // leitura de mat2
    printf("insira os %d valores para mat2\n", colunaAlinhaB * colunaB);
    for (int i = 0; i < colunaAlinhaB; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    // multiplicação
    for (int i = 0; i < linhaA; i++)
    {
        for (int j = 0; j < colunaB; j++)
        {
            mat3[i][j] = 0;
            for (int k = 0; k < colunaAlinhaB; k++)
            {
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    // impressão de mat3
    for (int i = 0; i < linhaA; i++)
    {
        printf("\n--------------\n");
        for (int j = 0; j < colunaB; j++)
        {
            printf("%3d |", mat3[i][j]);
        }
    }

    return 0;
}
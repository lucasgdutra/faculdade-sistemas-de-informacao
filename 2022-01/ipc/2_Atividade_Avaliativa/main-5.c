/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/
#include <stdio.h>
#include <stdlib.h>

// 5) Escreva um programa que leia uma matriz M de dimensões P x Q (P linhas e Q
// colunas). P e Q devem ser lidos. O programa deve declarar um vetor L com P posições e
// um vetor C com Q posições. Calcule o somatório dos valores presentes nas linhas da
// matriz M e armazene no vetor L, sendo o somatório de cada linha armazenado na
// posição respectiva do vetor L. Calcule o somatório dos valores presentes nas colunas da
// matriz M e armazene no vetor C, sendo o somatório de cada coluna armazenado na
// posição respectiva do vetor C.

int main()
{

    int linhas, colunas;

    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas], soma_linha[linhas], soma_coluna[colunas];

    printf("Digite os %d elementos da matriz: \n", linhas * colunas);
    for (int i = 0; i < linhas; i++)
    {

        soma_linha[i] = 0;

        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma_linha[i] += matriz[i][j];
            if (i == 0)
            {
                soma_coluna[j] = 0;
            }
            soma_coluna[j] += matriz[i][j];
        }
    }
    // imprime matriz com soma das linhas
    for (int i = 0; i < linhas; i++)
    {
        printf("|");
        for (int j = 0; j < colunas; j++)
        {
            printf("%4d ", matriz[i][j]);
        }
        printf("| = %4d\n", soma_linha[i]);
    }

    // imprime divisória
    printf("|");
    for (int i = 0; i < colunas; i++)
    {
        printf("-----");
    }
    printf("|\n");

    // imprime soma das colunas
    printf("|");
    for (int i = 0; i < colunas; i++)
    {
        printf("%4d ", soma_coluna[i]);
    }
    printf("|\n");

    return EXIT_SUCCESS;
}
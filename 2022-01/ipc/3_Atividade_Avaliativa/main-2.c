/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

// 2) Escreva um programa que leia os valores de uma matriz de ponto flutuante com 5
// linhas e 5 colunas. A matriz deve ser alocada dinamicamente. Após a leitura, o
// programa deve permitir a busca de um valor, da seguinte maneira: enquanto o valor da
// busca for diferente de zero, procurar o valor lido na matriz e imprimir as posições em
// que o valor foi localizado. Se o usuário informar o valor zero para busca, o programa
// deve desalocar a matriz, imprimir a mensagem “Isto é tudo, pessoal!” e encerrar a sua
// execução.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float **matriz;
    // alocação
    matriz = (float **)malloc(sizeof(float *) * 5);
    for (int i = 0; i < 5; i++)
    {
        matriz[i] = (float *)malloc(sizeof(float) * 5);
    }
    // leitura
    printf("Insira os %d valores da matriz\n", 5 * 5);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }

    // busca
    while (1)
    {
        float busca;
        printf("Insira o valor a ser buscado\n");
        scanf("%f", &busca);
        if (busca == 0)
        {
            printf("Isto é tudo, pessoal!\n");
            break;
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (busca == matriz[i][j])
                {
                    printf("encontrado na linha %d e coluna %d da matriz\n", i + 1, j + 1);
                }
            }
        }
    }

    // desalocação
    for (int i = 0; i < 5; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return EXIT_SUCCESS;
}
#include <stdio.h>

int main()
{
    int matriz[8][8], soma = 0;
    // leitura matriz
    printf("entre com os %d valores da matriz", 8 * 8);
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }

    printf("soma: %d", soma);

    return 0;
}
#include <stdio.h>

int main()
{
    int matriz[5][4], linha_n;
    // leitura linha n
    printf("entre com a linha n entre 1 e 5\n");
    scanf("%d", &linha_n);
    if (linha_n < 1 || linha_n > 5)
    {
        printf("linha n invalida\n");
        return 0;
    }
    // leitura matriz
    printf("Entre com os 20 elementos da matriz\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d | ", matriz[linha_n - 1][i]);
    }

    return 0;
}
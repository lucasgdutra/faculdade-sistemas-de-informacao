#include <stdio.h>
#include <stdlib.h>

// 3) Escreva um programa que leia uma matriz de tamanho 6x6. Calcule e imprima a
// soma dos elementos que estão abaixo da diagonal principal.
// * 0 0 0 0 0
// 1 * 0 0 0 0
// 1 1 * 0 0 0
// 1 1 1 * 0 0
// 1 1 1 1 * 0
// 1 1 1 1 1 *
// j > i
int main(int argc, char *argv[])
{
    int matriz[6][6], soma = 0;
    printf("Digite os %d elementos da matriz: \n", 6 * 6);
    for (int linha = 0; linha < 6; linha++)
    {
        for (int coluna = 0; coluna < 6; coluna++)
        {
            scanf("%d", &matriz[linha][coluna]);
            if (coluna < linha)
            {
                soma += matriz[linha][coluna];
            }
        }
    }
    printf("soma dos números abaixo da diagonal principal = %d\n", soma);

    return EXIT_SUCCESS;
}
#include <stdio.h>
// A  quantidade de números a serem lidos deve ser fornecida pelo usuário.

// Faça um programa que leia uma certa
// quantidade de números, imprima o maior deles e
// quantas vezes o maior número foi lido.

int main(int argc, char *argv[])
{
    int INT_NEG_INFINITY = -9999999;

    int n, max = INT_NEG_INFINITY, cont_max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int entrada;
        scanf("%d", &entrada);
        if (entrada > max || max == INT_NEG_INFINITY)
        {
            max = entrada;
            cont_max = 0;
        }
        if (entrada == max)
        {
            cont_max++;
        }
    }
    printf("max: %d repetições: %d", max, cont_max);
    return 0;
}
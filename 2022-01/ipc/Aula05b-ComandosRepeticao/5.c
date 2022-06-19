#include <stdio.h>

// Faça um programa que leia um número inteiro N,
// maior que zero, do usuário. Imprima a sequência
// de Fibonacci até o enésimo termo.
//  A sequência de Fibonacci começa com os termos 0
// e 1, e, a partir deles, o valor de cada termo é dado
// pela soma dos dois termos anteriores. Os
// primeiros termos dessa sequência são: 0, 1, 1, 2,
// 3, 5, 8, 13, 21, 34 ...

int main(int argc, char *argv[])
{

    int n, atual, atual_menos_dois = 0, atual_menos_um = 1;
    // entrada número de termos
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d ", 0);
        }
        else if (i == 1)
        {
            printf("%d ", 1);
        }
        else
        {
            atual = atual_menos_dois + atual_menos_um;
            printf("%d ", atual);
            atual_menos_dois = atual_menos_um;
            atual_menos_um = atual;
        }
    }
    return 0;
}
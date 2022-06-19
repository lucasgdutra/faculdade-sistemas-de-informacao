#include <stdio.h>

// Faça um programa que leia um número inteiro N,
// maior que zero, do usuário. Imprima a sequência
// de Fibonacci até o enésimo termo.
//  A sequência de Fibonacci começa com os termos 0
// e 1, e, a partir deles, o valor de cada termo é dado
// pela soma dos dois termos anteriores. Os
// primeiros termos dessa sequência são: 0, 1, 1, 2,
// 3, 5, 8, 13, 21, 34 ...

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
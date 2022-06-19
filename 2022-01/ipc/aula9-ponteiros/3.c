#include <stdio.h>

// EXERCÍCIO3
// Considere a seguinte declaração:
// float a, *b, **c, ***d;
// Escreva um programa que leia a variável ado teclado e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando apenas os ponteiros b, c e d. O ponteiro bdeve ser usado para calcular o dobro, c, o triplo, e d, o quádruplo. Faça b apontar para a, c para b, e d para c.

int main(int argc, char *argv[])
{

    float a, *b, **c, ***d;

    b = &a;
    c = &b;
    d = &c;
    printf("insira o valor de a\n");
    scanf("%f", &a);

    *b *= 2;
    printf("b: %f\n", *b);
    **c *= 1 / 2.0;
    **c *= 3;
    printf("c: %f\n", **c);
    ***d *= 1 / 3.0;
    ***d *= 4;
    printf("d: %f\n", ***d);

    return 0;
}
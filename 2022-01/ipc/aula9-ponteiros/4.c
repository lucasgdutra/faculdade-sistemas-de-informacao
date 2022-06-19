#include <stdio.h>

// Escreva um programa que mostre o tamanho em bytes que cada tipo de dados ocupa em memória (utilize a função sizeof()). Responda: Os diferentes níveis de apontamento e tipo de dados dos ponteiros apresentam tamanhos diferentes? Explique.charintfloatdoublelong doublechar ***, char **, char *int ***, int **, int *float ***, float **, float *double ***, double **, double *long double ***, long double **, long double *

// Responda: Os diferentes níveis de apontamento e tipo de dados dos ponteiros apresentam tamanhos diferentes?
// não pois todos os ponteiros são inteiros de 32/64 bits, a depender da máquina

int main(int argc, char *argv[])
{

    printf("tamanho de char %d\n", sizeof(char));
    printf("tamanho de int %d\n", sizeof(int));
    printf("tamanho de double %d\n", sizeof(double));
    printf("tamanho de long double %d\n", sizeof(long double));

    printf("tamanho de char* %d\n", sizeof(char *));
    printf("tamanho de char** %d\n", sizeof(char **));
    printf("tamanho de char*** %d\n", sizeof(char ***));

    return 0;
}
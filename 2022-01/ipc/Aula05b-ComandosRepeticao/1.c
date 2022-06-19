#include <stdio.h>

// Faça um programa que converta os valores inteiros de temperatura de -10 até 100 graus Celsius para Fahrenheit e Kelvin.
// A conversão de graus Fahrenheit para Celsius e dada pela expressão C / 5 = (F - 32) / 9 || (C * 9 / 5) + 32 =  F
// A conversão de graus Kelvin para Celsius e dada pela expressão C = K - 273,15 || C + 273,15 = K

int main(int argc, char *argv[])
{
    for (int c = -10; c <= 100; c++)
    {
        printf("%.2f ºF  %.2f ºK \n", (c * 9.0 / 5.0) + 32, c + 273.15);
    }

    return 0;
}
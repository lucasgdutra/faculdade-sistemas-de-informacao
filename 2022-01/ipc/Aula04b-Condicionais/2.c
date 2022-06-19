#include <stdio.h>

// Faça um programa que receba a altura e o sexo
// de uma pessoa e calcule e mostre seu peso ideal,
// utilizando as seguintes equações (em que “h”
// corresponde a altura)
//  homem: (72,7 * h) - 58
//  mulher: (62,1 * h) - 44,7

int main()
{
    float altura, peso_ideal;
    char sexo;
    printf("entre com altura\n");

    scanf(" %f", &altura);

    printf("entre com sexo m|f\n");

    scanf(" %c", &sexo);

    if (sexo != 'm' && sexo != 'f')
    {
        printf("sexo invalido");
    }
    else
    {

        if (sexo == 'm')
        {
            peso_ideal = (72, 7 * altura) - 58;
        }
        else if (sexo == 'f')
        {
            peso_ideal = (62, 1 * altura) - 44, 7;
        }
        printf("peso ideal: %.2f\n", peso_ideal);
    }

    return 0;
}
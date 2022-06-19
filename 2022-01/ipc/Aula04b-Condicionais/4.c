#include <stdio.h>
#include <math.h>

// Faça um programa que leia os coeficientes a, b, c de
// uma equação do segundo grau. Em seguida, calcule e
// mostre as raízes dessa equação, lembrando que as
// raízes são calculadas como:
// em que
//  e representa uma equação do
// segundo grau. A variável a tem que ser diferente de
// zero. Caso seja igual, imprima a mensagem “Não é
// equação do segundo grau”. Do contrário, imprima:
//  se < 0, não existe raíz real. Imprima “Não existe raíz”
//  se = 0, existe uma raíz real. Imprima “Raiz única”
//  se > 0, existem duas raízes reais. Imprima as raízes.

int main()
{
    float a, b, c, delta, raiz1 = 0, raiz2 = 0, t1, t2;

    scanf("%f %f %f", &a, &b, &c);

    if (a == 0)
    {
        printf("Não é equação do segundo grau");
        return 0;
    }
    t1 = pow(b, 2.0);
    t2 = (4.0 * a * c);
    delta = t1 - t2;

    if (delta < 0)
    {
        printf("Não existe raíz");
        return 0;
    }
    if (delta == 0)
    {
        printf("Raiz única");
        return 0;
    }
    else
    {
        raiz1 = (-b + sqrt(delta)) / (2.0 * a);
        raiz2 = (-b - sqrt(delta)) / (2.0 * a);

        printf("raiz 1 = %.2f \n", raiz1);
        printf("raiz 2 = %.2f \n", raiz2);
    }
    return 0;
}
#include <stdio.h>

int main()
{
    double vi, vf, t, am;

    printf("Digite a velocidade inicial: \n");
    scanf("%lf", &vi);
    printf("Digite a velocidade final: \n");
    scanf("%lf", &vf);
    printf("Digite o intervalo de tempo: : \n");
    scanf("%lf", &t);

    am = (vf - vi) / t;

    printf("%lf", am);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main()
{
    float num[10], soma = 0, media, dp, sm_var = 0, var;
    // coletar os numeros
    for (int i = 0; i <= 9; i++)
    {
        scanf("%f", &num[i]);
    }

    // soma todos numeros
    for (int i = 0; i <= 9; i++)
    {
        soma += num[i];
    }
    media = soma / 10.0;

    // somatorio
    for (int i = 0; i <= 9; i++)
    {
        sm_var += pow(num[i] - media, 2);
    }
    var = sm_var / 10.0;
    dp = sqrt(var);

    printf("media eh: %f\n", media);
    printf("desvio padrao eh: %f\n", dp);
}

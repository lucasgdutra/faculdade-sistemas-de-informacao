#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float des_pad, media, soma = 0, soma2 = 0;
    scanf("%d", &n);
    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / (float)n;
    for (int i = 0; i < n; i++)
    {
        soma2 += pow(vetor[i] - media, 2);
    }
    des_pad = sqrt(1.0 / (float)n * soma2);

    printf("media: %f  desvio p: %f\n", media, des_pad);
    system("pause");
    return 0;
}

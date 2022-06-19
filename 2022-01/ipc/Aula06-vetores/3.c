#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[20], invertido[20];

    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&vetor[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        invertido[19 -i] = vetor[i];
    }
    for (int i = 0; i < 20; i++)
    {
       printf("%d \n",invertido[i]);
    }

    system("pause");

    return 0;
}
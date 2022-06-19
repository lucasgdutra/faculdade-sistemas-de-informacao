#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    float vetor[n], s = 0;

    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &vetor[i]);
        s += i / vetor[i];
    }

    printf("%f", s);

    system("pause");
    return 0;
}

#include <stdio.h>

// Escreva um programa leia um valor inteiro N maior que zero. Se o valor de N for inválido, o usuário deve digitar outro até que ele seja válido (utilize um laço).

// Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2.

// Alocar esse vetor dinamicamente. Após a leitura, escreva outro laço para apresentar o vetor na saída padrão (printf).

int main(int argc, char *argv[])
{
    int n;

    while (1)
    {
        printf("insira o tamanho do vetor\n");
        scanf("%d", &n);
        if (n == 0)
        {
            printf("o valor deve ser diferente de zero\n");
        }
        else
        {
            break;
        }
    }
    int *vetor;
    vetor = malloc(sizeof(int) * n);

    printf("insira os valores para o vetor\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", vetor + i);
        if (*(vetor + i) < 2)
        {
            printf("o valor deve ser maior ou igual a dois\n");
            i--;
        }
    }
    for (size_t i = 0; i < n; i++)
    {
        printf("vetor[%d] = %d\n", i, *(vetor + i));
    }

    free(vetor);
    return 0;
}
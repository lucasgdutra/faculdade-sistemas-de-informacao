/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

/*
3) Faça um programa que leia um vetor com 20 números de ponto flutuante. Em
seguida, ordene os elementos desse vetor e imprima o vetor na tela.

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	float vetor[20];

	// leitura
	printf("Digite 20 números:\n");
	for (int i = 0; i < 20; i++)
	{
		scanf("%f", &vetor[i]);
	}

	// ordenação
	for (int i = 0; i < 20; i++)
	{
		for (int j = 0; j < 20 - i; j++)
		{
			if (vetor[j] > vetor[j + 1])
			{
				float aux = vetor[j];
				vetor[j] = vetor[j + 1];
				vetor[j + 1] = aux;
			}
		}
	}
	// impressão
	for (int i = 0; i < 20; i++)
	{
		printf("vetor[%d] = %f\n", i, vetor[i]);
	}

	return 0;
}
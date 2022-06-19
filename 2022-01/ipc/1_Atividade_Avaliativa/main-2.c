/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

/*
2) Faça um programa para ler 10 números diferentes a serem armazenados em um
vetor. Os números deverão ser armazenados no vetor na ordem em que forem lidos,
sendo que, caso o usuário digite um número que já foi digitado anteriormente, o
programa deverá pedir a ele para digitar outro número, até que seja digitado um
diferente dos anteriores. Note que cada valor digitado pelo usuário deve ser
pesquisado no vetor, verificando se ele existe entre os números que já foram
fornecidos. Exiba na tela o vetor final.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	int vetor[10];
	// leitura do vetor
	printf("Digite 10 números diferentes: \n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &vetor[i]);
		for (int j = 0; j < i; j++)
		{
			if (vetor[i] == vetor[j])
			{
				printf("Número já inserido, digite outro numero\n");
				i--;
				break;
			}
		}
	}
	// impressão do vetor
	for (int i = 0; i < 10; i++)
	{
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}

	return 0;
}
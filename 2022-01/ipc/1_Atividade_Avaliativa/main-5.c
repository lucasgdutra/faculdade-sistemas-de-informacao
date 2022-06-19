/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

/*
5)Leia n valores numéricos e armazene-os no vetor V. O valor de n deve ser lido antes
da leitura do vetor V. Calcule e exiba o valor do desvio padrão d e a média m do vetor
V.
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n;
	printf("Digite o numero de elementos do vetor: ");
	scanf("%d", &n);

	float vetor[n], soma = 0, soma_variancia = 0, variancia = 0, media, desvio_padrao;
	printf("Digite os elementos do vetor: \n");

	// leitura
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &vetor[i]);
		soma += vetor[i];
	}
	media = soma / n;
	for (int i = 0; i < n; i++)
	{
		soma_variancia += pow(vetor[i] - media, 2);
	}
	variancia = soma_variancia / (float)n;
	desvio_padrao = sqrt(variancia);

	printf("Media: %f\n", media);
	printf("Desvio Padrao: %f\n", desvio_padrao);
	return 0;
}
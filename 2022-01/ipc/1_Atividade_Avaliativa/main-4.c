/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

/*
4) Leia n valores numéricos e os armazene no vetor v. O valor de n também deve ser
lido. Calcule e exiba o valor da série S onde vi é o i-ésimo valor armazenado no vetor v.


S = somatorio de i=1 a n de (i/vi)
*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	int n;
	printf("Digite o numero de valores: ");
	scanf("%d", &n);
	float vetor[n], soma = 0;

	// leitura e soma
	printf("Digite os valores do vetor:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%f", &vetor[i]);
		// evita divisão por zero
		if (vetor[i] == 0)
		{
			continue;
		}
		soma += (i + 1) / vetor[i];
	}

	// impressão
	printf("%f\n", soma);
	return 0;
}
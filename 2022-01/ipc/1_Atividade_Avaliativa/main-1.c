/*
Lucas Gabriel Dutra de Souza
12121BSI226
*/

/*
1) Uma empresa de beneficiamento de milho criou seu próprio sistema de
classificação, representado na tabela a seguir. Faça um programa que leia o tipo e a
quantidade de grãos quebrados por amostra de milho. Após a leitura do tipo e da
quantidade de quebrados, o programa deve imprimir o preço por saca.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{

	char tipo;
	char tipo_milho[4] = {'A', 'B', 'C', 'D'};
	int quebrada;
	float matriz[4][3] = {
		{170, 151.3, 139.2},
		{153, 136.17, 125.28},
		{139.23, 123.91, 112.76},
		{128.09, 117.84, 104.88}};

	printf("Digite o tipo do milho: \n");
	scanf("%c", &tipo);
	printf("Digite a quantidade de grãos quebrados do milho: \n");
	scanf("%d", &quebrada);

	if (quebrada >= 3 && quebrada <= 5)
	{
		for (int i = 0; i < 4; i++)
		{
			if (tipo_milho[i] == tipo)
			{
				printf("O preço por saca é: %f\n", matriz[i][quebrada - 3]);
				return 0;
			}
		}
		printf("Valor inválido para tipo\n");
	}
	else
	{
		printf("Valor inválido para qtd quebrado\n");
	}

	return 0;
}
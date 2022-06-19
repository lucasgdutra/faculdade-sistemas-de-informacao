#include <stdio.h>

// ATIVIDADE 3
// Faça um programa para resolver o seguinte
// requisito. Uma empresa concedeu um reajuste
// salarial de 7,5% a todos os seus funcionários e
// criou um novo auxílio de R$ 100,00 para aqueles
// que recebem até R$ 1200,00. Dado o valor do
// salário de um funcionário, informar para quanto
// ele será reajustado

int main()
{
    float atual, novo;
    scanf("%f", &atual);
    novo = atual * 1.075;
    if (novo < 1200)
    {
        novo += 100;
    }
    printf("novo salario: %.2f", novo);
    return 0;
}
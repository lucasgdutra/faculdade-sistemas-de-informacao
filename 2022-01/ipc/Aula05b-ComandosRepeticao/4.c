#include <stdio.h>

// Faça um programa que leia 10 números inteiros
// positivos e imprima a média, o menor e o maior
// número. O programa deve ignorar os números
// negativos que o usuário fornecer como entrada
// (lendo novamente até que um número maior ou
// igual a zero seja fornecido).

int main(int argc, char *argv[])
{
    int min, max, soma = 0, contador = 0;
    while (contador <= 10)
    {
        int entrada;
        scanf("%d", &entrada);
        // se numero negativo decrementa i e volta ao for
        if (entrada < 0)
        {
            continue;
        }
        // se atual menor que o mínimo então substitui o mínimo
        if (entrada < min || contador == 0)
        {
            min = entrada;
        }
        // se atual maior que o máximo então substitui o máximo
        if (entrada > max || contador == 0)
        {
            max = entrada;
        }
        soma += entrada;
        contador++;
    }
    printf("min:%d max:%d media:%f", min, max, soma / 10.0);

    return 0;
}

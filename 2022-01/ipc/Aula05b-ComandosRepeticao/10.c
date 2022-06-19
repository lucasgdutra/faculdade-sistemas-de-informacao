#include <stdio.h>

// Escreva um programa que leia um número
// positivo e calcule a soma de todos os divisores
// desse número, com exceção dele próprio.
// Exemplo: a soma do divisores do número 66 é: 1 +
// 2 + 3 + 6 + 11 + 22 + 33 = 78.
// O programa deve exibir os divisores e a sua soma.

int main (int argc, char *argv[]) {
    int entrada, soma=0;
    scanf("%d", &entrada);
    printf("divisores: ");
    for(int i=1; i<entrada; i++){
        if(entrada%i == 0){
            printf("%d ", i);
            soma += i;
        }
    }
    printf("\nsoma: %d ", soma);
    return 0;
}
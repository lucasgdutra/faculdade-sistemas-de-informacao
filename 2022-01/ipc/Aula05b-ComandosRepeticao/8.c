#include <stdio.h>

// Faça um programa que leia um número inteiro
// positivo N e em seguida imprima N linhas do
// chamado triângulo de Floyd.
// Por exemplo, para N = 6
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20 21


int main (int argc, char *argv[]) {
    int n, contador=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("%d ",contador);
            contador++;
        }
        printf("\n");
    }

    return 0;
}
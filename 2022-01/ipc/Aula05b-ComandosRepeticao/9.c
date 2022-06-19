#include <stdio.h>

// Faça um algoritmo que leia um número positivo e
// imprima seus divisores. Exemplo: os divisores do
// número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
// Utilize o operador % (que retorna o resto da
// divisão) e laços para determinar os divisores.


int main (int argc, char *argv[]) {
    int entrada;
    scanf("%d", &entrada);
    for(int i=1; i<=entrada; i++){
        if(entrada%i==0){
            printf("%d ", i);
        }
    }
    return 0;
}
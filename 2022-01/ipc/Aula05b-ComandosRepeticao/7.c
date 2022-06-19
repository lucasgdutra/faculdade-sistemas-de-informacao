#include <stdio.h>

// Faça um programa que utilize um laço para
// calcular o valor de S:
// A saída do programa deve ser o valor de S.
//1/1 + 3/2 + 5/3 ... 99/50



int main(int argc, char *argv[])
{
    int denominador = 1;
    double soma=0;
    for (int numerador = 0; numerador < 100; numerador++){
        //se numerador for par pula para o próximo
        if(numerador % 2 == 0){
            continue;
        }
        soma += numerador/(double)denominador;
        denominador++;
    }
    printf("%.13lf", soma);
    return 0;
}
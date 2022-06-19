#include <stdio.h>

// Altere o código da atividade 2 para uma repetição
// com teste no final
// Utilize o seguinte laço em C:
// do {
// comandos;
// } while (condição);

int main(int argc, char *argv[])
{

    int c = 0;
    float f, k;

    f = (c * 9.0 / 5.0) + 32;
    k = c + 273.15;

    do
    {
        printf("%.2f ºF  %.2f ºK \n", f, k);
        f = (c * 9.0 / 5.0) + 32;
        k = c + 273.15;
        c++;
    } while (f < 200);

    return 0;
}
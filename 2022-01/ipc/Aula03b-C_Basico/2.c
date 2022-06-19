#include<stdio.h>

int main(){
    double C, F, K;-

    scanf("%lf",&C);
  
    F = (C*(9.0/5.0))+32;
    K = C + 273.15;
    
    printf("Temperatura em F: %lf\n",F);
        printf("Temperatura em K: %lf",K);

    return 0;
}
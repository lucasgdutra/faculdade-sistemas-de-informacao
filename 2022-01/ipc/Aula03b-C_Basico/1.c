#include<stdio.h>
#include<math.h>

int main(){
    double cat1, cat2, hip;
    scanf("%lf",&cat1);
    scanf("%lf",&cat2);
    hip = sqrt((cat1*cat1)+(cat2*cat2));
    printf("%lf",hip);
    return 0;
}
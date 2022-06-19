#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int vetor[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vetor[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(vetor[j] > vetor[j+1]){
                int tmp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = tmp;
            }
        }
        
    }

    printf("%d",vetor[n-1]);
    
    system("pause");
    
    return 0 ;
}
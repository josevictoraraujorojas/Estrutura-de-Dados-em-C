#include<stdlib.h>
#include<stdio.h>
void atribuindoValor(int *array, int n);
void Imprimi(int *array,int n);
int main()
{
    int n=10, array[n];
    atribuindoValor(array,n);
    Imprimi(array,n);
}
void Imprimi(int *array,int n){
    int maiorValor;
    for (int i = 0; i < n; i++)
    {
        if (*(array+i)>maiorValor)
       {
        maiorValor=*(array+i);
       }
        printf("\nindice %d tem o valor %d",i,*(array+i));
    }
    printf("\nO maior valor  %d",maiorValor);

    
}
void atribuindoValor(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor do indice %d do array:",i);
        scanf("%d",&*(array+i));
    }
}

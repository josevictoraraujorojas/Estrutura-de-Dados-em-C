#include<stdlib.h>
#include<stdio.h>

void buscaMaiorValor(int *array,int n);
void atribuindoValor(int *array, int n);
int main()
{
    int n =10, array[n];
    atribuindoValor(array,n);
    buscaMaiorValor(array,n);
    
}
void atribuindoValor(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor do indice %d do array:",i);
        scanf("%d",&*(array+i));
    }
}
void buscaMaiorValor(int *array,int n){
    int maiorValor=0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
       if (*(array+i)>maiorValor)
       {
        maiorValor=*(array+i);
       }
    }
    for (int i = 0; i < n; i++)
    {
       if (*(array+i)==maiorValor)
       {
        count++;
       }
    }
    
    printf("Esse e o maior valor %d e ele apareceu %d vezes ",maiorValor,count);
}
#include<stdlib.h>
#include<stdio.h>

int somaArrays(int *p1, int *p2, int *p3,int n, int m);
void atribuindoValor(int *array, int n);
void Imprimi(int *array,int n);
int main()
{
    int  n=10, primeiroArray[n], m=10, segundoArray[m];
    int terceiroArray[sizeof(primeiroArray)/sizeof(primeiroArray[0])];

    atribuindoValor(primeiroArray,n);
    atribuindoValor(segundoArray,m);

   if (somaArrays(primeiroArray,segundoArray,terceiroArray,n,m)==0)
   {
     printf("Os tamanhos dos arrays sao diferentes");
   }else{
    Imprimi(terceiroArray,n);
   }
    
}
void Imprimi(int *array,int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nindice %d tem o valor %d",i,*(array+i));
    }
    
}
void atribuindoValor(int *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor do indice %d do array:",i);
        scanf("%d",&*(array+i));
    }
}
int somaArrays(int *p1, int *p2, int *p3,int n, int m){
    if (m!=n)
    {
       return 0;
    }   

    for (int i = 0; i < m; i++)
    {
        *(p3+i)= *(p2+i)+*(p1+i);
    }
    return 1;
    
}

/*22. Crie uma func¸ao para somar dois arrays. Esta func¸ ˜ ao deve receber dois arrays e retornar ˜
a soma em um terceiro array. Caso o tamanho do primeiro e segundo array seja diferente
entao a func¸ ˜ ao retornar ˜ a ZERO (0). Caso a func¸ ´ ao seja conclu ˜ ´ıda com sucesso a mesma
deve retornar o valor UM (1). Utilize aritmetica de ponteiros para manipulac¸ ´ ao do array. */
#include<stdlib.h>
#include<stdio.h>

int somaArrays(int *p1, int *p2, int *p3,int n, int m);
void atribuindoValor(int *array, int n);
void Imprimi(int *array,int n);
int main()
{
    int  n=10, primeiroArray[n], m=11, segundoArray[m];
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

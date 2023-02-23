/*19. Escreva uma func¸ao que aceita como par ˜ ametro um array de inteiros com N valores, e ˆ
determina o maior elemento do array e o numero de vezes que este elemento ocorreu ´
no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15,
8, 6, 15, a func¸ao deve retorna para o programa que a chamou o valor 15 e o n ˜ umero 3 ´
(indicando que o numero 15 ocorreu 3 vezes). A func¸ ´ ao deve ser do tipo ˜ void.*/

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
/*24. Escreva uma func¸ao que receba um array de inteiros V e os enderec¸os de duas vari ˜ aveis ´
inteiras, min e max, e armazene nessas variaveis o valor m ´ ´ınimo e maximo do array. ´
Escreva tambem uma func¸ ´ ao main que use essa func¸ ˜ ao. */
#include<stdlib.h>
#include<stdio.h>
void atribuindoValor(int *array, int n);
void Imprimi(int *array,int n);
void buscaMaximoMinino(int *array,int n,int *maximo,int *minimo);

int main()
{
    int n=10, array[n], minimo, maximo;
    atribuindoValor(array,n);
    Imprimi(array,n);
    buscaMaximoMinino(array,n,&maximo,&minimo);
    printf("\nmaximo=%d\nminimo=%d",maximo,minimo);

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
void buscaMaximoMinino(int *array,int n,int *maximo,int *minimo){
    printf("%d",*(array+1));
    *minimo = *(array+1);
    *maximo = *(array+1);
    for (int i = 0; i < n; i++)
    {
        if (*(array+i)<*minimo)
       {
        *minimo = *(array+i);
       }
       if (*(array+i)>*maximo)
       {
        *maximo = *(array+i);
       }
    }
}

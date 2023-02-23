#include<stdlib.h>
#include<stdio.h>
void atribuindoValor(int *array, int n);
void Imprimi(int *array,int n);
void buscaMaximoMinino(int *array,int n,int *maximo,int *minimo);

int main()
{
    int n=10, array[n], minimo=0, maximo=0;
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
    *minimo = *array+1;
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

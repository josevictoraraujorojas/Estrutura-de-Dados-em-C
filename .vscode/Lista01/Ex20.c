#include<stdlib.h>
#include<stdio.h>

void atribuindoValor(float *array, int n);
int procuraNumerosNegativos(float *array, int n);

int main()
{
    int N=10;
    float array[N];
    atribuindoValor(array,N);
    printf("%d",procuraNumerosNegativos(array,N));
    
}
void atribuindoValor(float *array, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Insira o valor do indice %d do array:",i);
        scanf("%f",&*(array+i));
    }
}

int procuraNumerosNegativos(float *array, int n){
    int numerosNegativos=0;
    for (int i = 0; i < n; i++)
    {
        if (*(array+i)<0)
        {
            numerosNegativos++;
        }
        
    }
    return numerosNegativos;
}



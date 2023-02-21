#include<stdlib.h>
#include<stdio.h>

void AtribuindoValor(int *array);
void ImprimiODobro(int *array);

int main()
{
    int array[5];
    AtribuindoValor(array);
    ImprimiODobro(array);
}

void AtribuindoValor(int *array){
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o valor do indice %d do array:",i);
        scanf("%d",&*(array+i));
    }
}

void ImprimiODobro(int *array){
    for (int i = 0; i < 5; i++)
    {
        printf("\nindice %d tem o valor %d",i,*(array+i)*2);
    }
    
}

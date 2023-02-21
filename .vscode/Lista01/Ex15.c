#include<stdlib.h>
#include<stdio.h>

void AtribuindoValor(int *array, int valor);
void Imprimi(int *array);

int main()
{
    int array[5];
    AtribuindoValor(array,10);
    Imprimi(array);
}

void AtribuindoValor(int *array, int valor){
    for (int i = 0; i < 5; i++)
    {
        *(array+i)=valor;
    }
}

void Imprimi(int *array){
    for (int i = 0; i < 5; i++)
    {
        printf("\nindice %d tem o valor %d",i,*(array+i));
    }
    
}
/*11. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec¸o das posic¸oes contendo valores pares.*/
#include<stdlib.h>
#include<stdio.h>

void AtribuindoValor(int *array);
void BuscandoValoresPares(int *array);

int main()
{
    int array[5];
    AtribuindoValor(array);
    BuscandoValoresPares(array);
}

void AtribuindoValor(int *array){
    for (int i = 0; i < 5; i++)
    {
        printf("Insira o valor do indice %d do array:",i);
        scanf("%d",&*(array+i));
    }
}

void BuscandoValoresPares(int *array){
    for (int i = 0; i < 5; i++)
    {
        if (*(array+i)%2==0)
        {
            printf("\no endereco do indice %d que tem o valor %d que e  par e %p",i,*(array+i),(array+i));
        }
    }
}
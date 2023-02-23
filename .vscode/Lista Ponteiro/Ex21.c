/*21. Escreva um programa que declare um array de inteiros e um ponteiro para inteiros. Associe o ponteiro ao array. Agora, some mais um (+1) a cada posic¸ao do array usando o ˜
ponteiro (use *).*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n = 10, array[n], *ponteiro=0;
    ponteiro=&array;
    for (int i = 0; i < n; i++)
    {
        *(ponteiro+i)=i+1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("\nindice %d tem o valor %d",i,*(array+i));
    }
    
}


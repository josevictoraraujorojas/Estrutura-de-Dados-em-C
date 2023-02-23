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


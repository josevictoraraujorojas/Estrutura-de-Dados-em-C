#include <stdio.h>  	
#include <stdlib.h>

int main()
{
   int *ponteiro;
   int i = 0xFACA;
   ponteiro = &i;

   printf("valor de i: %d \n atraves do ponteiro: %d \n valor do endereco de memoria: %d",i,&i,ponteiro);
}


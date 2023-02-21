#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("sizeof(int)=%d\n",sizeof(int));
	int *p=0, i=0, q=0;
	
	printf("Digite quantas variaveis voce quer");
	scanf("%d", &q);
	printf("valor q = %d",q);
	p= (int*)malloc(q*sizeof(int));
	
	for(i = 0; i < q; i++){
		*(p+i) = i*3;
	}
	
	for(i = 0; i < q; i++){
		printf("End. Memoria: %p, valor: %d\n", p+i, *(p+i));
	}
	free(p);
}

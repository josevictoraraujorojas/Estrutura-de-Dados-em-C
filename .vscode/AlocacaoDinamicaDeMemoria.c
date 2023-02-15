#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p, i=0, q=0;
	
	printf("Digite quantas variaveis voce quer");
	scanf("%d", &q);
	p= (int*)malloc(i*64);
	
	for(i = 0; i < q; i++){
		*(p+i) = i*3;
	}
	
	for(i = 0; i < q; i++){
		printf("End. Memoria: %p, valor: %d\n", p+i, *(p+i));
	}
	free(p);
	system("pause");	
}

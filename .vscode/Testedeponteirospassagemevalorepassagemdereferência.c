#include<stdio.h>
#include<stdlib.h>
int soma(); //Faz uma soma......passagem de valor.
int somar(int *p1, int *p2); //Soma.... passagem de refrência
int percorrevetor(int *v, int t);
int imprimevetor(int *v, int t);
main(){
	int a = 5, b = 10, i, j;
	int vetor[10], matriz[5][2];
	
	percorrevetor(vetor, 10);
	percorrevetor(matriz[0], 10);
	soma(a, b); //passagem de valor
	printf("%d + %d = %d\n", a, b, a+b);
	somar(&a, &b); //passagem de referência
	printf("%d + %d = %d\n", a, b, a+b);
	
	for (i = 0; i < 10; i++){
		printf("Valor posicao %d = %d\n", i, vetor[i]);
	}
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 2; j++)
			printf("Valor posicao %d = %d\n", i, matriz[i][j]);
	}
	system("pause");
	imprimevetor(vetor, 20);
	system("pause");
	
}

int soma(int x, int y){
x = 6;
y = 7;
printf("%d + %d = %d\n", x, y, x+y);
}

int somar(int *p1, int *p2){
	*p1 = 10;
	*p2 = 20;
	printf("Endereco de X e %p, e o endreco de y e %p\n", p1, p2);
	printf("%d + %d = %d\n", *p1, *p2, *p1+*p2);
}

int percorrevetor(int *v, int t){
	int i;
	for (i = 0; i < t; i++){
		*(v+i)= i * 2;
	}	
}

int imprimevetor(int *v, int t){
	int i;
	for (i = 0; i < t; i++){
		printf("Valor %d = %d\n", i+1, *(v+i));
	}	
}

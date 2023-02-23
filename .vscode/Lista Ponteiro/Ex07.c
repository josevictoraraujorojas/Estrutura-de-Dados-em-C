/*7. Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal. */
#include<stdlib.h>
#include<stdio.h>

void somaDeDoisNumeros(int *p1,int *p2);

int main()
{
   int a,b;
   printf("Digite dois valores inteiros");
   scanf("%d %d",&a,&b);

   somaDeDoisNumeros(&a,&b);
   printf("\nValor de a = %d\nValor de b = %d\n",a,b);

}
void somaDeDoisNumeros(int *p1,int *p2){
*p1+=*p2;
}
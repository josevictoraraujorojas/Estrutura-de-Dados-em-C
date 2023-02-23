/*6. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B.*/
#include<stdlib.h>
#include<stdio.h>
int somaDoDobro(int *p1,int *p2);

int main()
{
    int a,b;
   printf("Digite dois valores inteiros");
   scanf("%d %d",&a,&b);

   printf("\nValor de a = %d\nValor de b = %d\n",a,b);
   printf("A soma do dobro de a e b = %d",somaDoDobro(&a,&b));
   printf("\nValor de a = %d\nValor de b = %d\n",a,b);



}
int somaDoDobro(int *p1,int *p2){
    *p1 *= 2;
    *p2 *= 2;
    
    return *p1+*p2;
}

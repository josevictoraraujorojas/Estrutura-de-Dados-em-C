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
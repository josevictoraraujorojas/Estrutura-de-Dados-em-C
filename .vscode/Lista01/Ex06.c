#include<stdlib.h>
#include<stdio.h>
int somaDoDobro(int *p1,int *p2);

int main()
{
    int a,b;
   printf("Digite dois valores inteiros");
   scanf("%d %d",&a,&b);

   int *p1 =&a,*p2=&b;

   printf("\nValor de a = %d\nValor de b = %d\n",a,b);
   printf("A soma do dobro de a e b = %d",somaDoDobro(p1,p2));
   printf("\nValor de a = %d\nValor de b = %d\n",a,b);



}
int somaDoDobro(int *p1,int *p2){
    *p1 *= 2;
    *p2 *= 2;
    
    return *p1+*p2;
}

#include<stdlib.h>
#include<stdio.h>
void recebeValores(int *p1,int *p2);

int main()
{
    int a,b;
   printf("Digite dois valores inteiros");
   scanf("%d %d",&a,&b);
   recebeValores(&a,&b);
     printf("primeira variavel = %d e segunda variavel = %d",a,b);



   
}
void recebeValores(int *p1,int *p2){
    if (*p1<*p2)
    {
        *p1 += *p2; // primeiro valor + segundo valor
        *p2 = *p1-*p2; // primeiro valor - segundo valor = primeiro valor
        *p1 = *p1-*p2;// primeiro valor - segundo valor = segundo valor
        
    }
}

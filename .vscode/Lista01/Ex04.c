#include<stdlib.h>
#include<stdio.h>
void trocaValor(int *p1, int* p2);
int main()
{
    int a=20,b=10;
    printf("valores originais a = %d e b = %d",a,b);
    int *p1 =&a,*p2=&b;
    trocaValor(p1,p2);
    printf("\nvalores trocadosa = %d e b = %d",a,b);


}
void trocaValor(int *p1, int* p2){
*p1 += *p2; // primeiro valor + segundo valor
*p2 = *p1-*p2; // primeiro valor - segundo valor = primeiro valor
*p1 = *p1-*p2;// primeiro valor - segundo valor = segundo valor
}

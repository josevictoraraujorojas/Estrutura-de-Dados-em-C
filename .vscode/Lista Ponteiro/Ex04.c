/*4. Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A*/
#include<stdlib.h>
#include<stdio.h>
void trocaValor(int *p1, int* p2);
int main()
{
    int a=20,b=10;
    printf("valores originais a = %d e b = %d",a,b);
    trocaValor(&a,&b);
    printf("\nvalores trocadosa = %d e b = %d",a,b);


}
void trocaValor(int *p1, int* p2){
*p1 += *p2; // primeiro valor + segundo valor
*p2 = *p1-*p2; // primeiro valor - segundo valor = primeiro valor
*p1 = *p1-*p2;// primeiro valor - segundo valor = segundo valor
}

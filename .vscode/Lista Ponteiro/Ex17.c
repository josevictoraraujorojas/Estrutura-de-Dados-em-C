/*17. Escreva uma func¸ao que dado um n ˜ umero real passado como par ´ ametro, retorne a parte ˆ
inteira e a parte fracionaria deste n ´ umero. Escreva um programa que chama esta func¸ ´ ao. ˜
Prototipo:*/
#include<stdlib.h>
#include<stdio.h>
void frac(float num,int *inteiro,float *frac);
int main()
{
    float num=1.50, fracao;
    int inteiro;
    frac(num,&inteiro,&fracao);
    printf("O numero %f tem como parte intira %d e parte fracional %f",num,inteiro,fracao);
}
void frac(float num,int *inteiro,float *frac){
    *inteiro=(int) num;
    *frac = num - *inteiro;
}

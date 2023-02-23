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

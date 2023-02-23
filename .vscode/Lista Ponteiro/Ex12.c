/*12. Fac¸a um programa que leia tres valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.*/
#include<stdlib.h>
#include<stdio.h>

int organizaValores (int *a,int *b,int *c);

int main()
{
    int a,b,c;

    printf("digite 3 valores");
    scanf("%d %d %d",&a,&b,&c);

    printf("%d\n",organizaValores(&a,&b,&c));
    printf("a=%d\nb=%d\nc=%d",a,b,c);

}

int organizaValores (int *a,int *b,int *c){
    if (*a<*b)
    {
        *a += *b; 
        *b = *a-*b; 
        *a = *a-*b;
    }
    if (*a<*c)
    {
        *a += *c; 
        *c = *a-*c; 
        *a = *a-*c;
    }
    if (*b<*c)
    {
        *b += *c; 
        *c = *b-*c; 
        *b = *b-*c;
    }
    
    if (*b == *c && *c==*a)
    {
        return 1;
    }else
    {
        return 0;
    }
}

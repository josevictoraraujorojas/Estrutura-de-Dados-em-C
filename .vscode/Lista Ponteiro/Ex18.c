/*18. Implemente uma func¸ao que calcule a ˜ area da superf ´ ´ıcie e o volume de uma esfera de
raio R. Essa func¸ao deve obedecer ao prot ˜ otipo:*/
#include<stdlib.h>
#include<stdio.h>
void calculaEsfera(float r,float *area,float *volume);
int main()
{
    float r=6, area, volume;
    calculaEsfera(r,&area,&volume);
    printf("O volume da esfera e %f a area e %f",volume,area);

}
void calculaEsfera(float r,float *area,float *volume){
    *volume=(4* 3.14 * pow(r,3))/3;
    *area = 4 * 3.14 * pow(r,2);

}

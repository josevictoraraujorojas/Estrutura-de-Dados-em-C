/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.*/

#include<stdlib.h>
#include<stdio.h>

int main()
{
    //criando as variaveis
    int x=0, *ponteiroX=0;
    double y=1,*ponteiroY=0;
    char z='x', *ponteiroZ=NULL;
//    apontando o ponteiro para as variaveis
    ponteiroX = &x;
    ponteiroY = &y;
    ponteiroZ = &z;

    //mostrando o valor da variavel
    printf("\npela variavel\nx = %d\ny = %f\nz = %c\n",x,y,z);

    //mostrando o valor da variavel pelo ponteiro
    printf("\npelo ponteiro\nx = %d\ny = %f\nz = %c\n",*ponteiroX,*ponteiroY,*ponteiroZ);

    //modificando o valor das variaveis pelo ponteiro

    *ponteiroX = 4;
    *ponteiroY = 5;
    *ponteiroZ = 'z';

    //mostrando o valor da variavel
    printf("\npela variavel\nx = %d\ny = %f\nz = %c\n",x,y,z);

    //mostrando o valor da variavel pelo ponteiro
    printf("\npelo ponteiro\nx = %d\ny = %f\nz = %c\n",*ponteiroX,*ponteiroY,*ponteiroZ);




}

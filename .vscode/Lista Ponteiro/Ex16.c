/*16. Considere a seguinte declarac¸ao: int A, *B, **C, ***D; Escreva um programa que leia a ˜
variavel a e calcule e exiba o dobro, o triplo e o qu ´ adruplo desse valor utilizando apenas ´
os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D
o quadruplo*/
#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a, *b, **c, ***d;
   printf("digite um valor");
   scanf("%d",&a);
   b=&a,c=&b,d=&c;
   printf("o valor %d tem como dobro %d, triplo %d e quadruplo %d",a,*b*2,**c*3,***d*4);

}

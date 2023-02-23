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

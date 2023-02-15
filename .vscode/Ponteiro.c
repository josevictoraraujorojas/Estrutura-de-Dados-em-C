#include <stdio.h>  	

main()
{
   int x = 5, y = 10;
   int *p1,*p2;
   p1 = &x;
   p2 = &y;
   printf("%d + %d = %d\n",x,y,x+y);
   printf("Endereco de X e %p, e o endereco de Y %p\n",p1,p2);
   printf("%d + %d = %d\n",*p1,*p2,*p1+*p2);
}


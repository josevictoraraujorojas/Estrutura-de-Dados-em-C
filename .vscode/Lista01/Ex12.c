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

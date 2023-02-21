#include<stdlib.h>
#include<stdio.h>
void ComparaEndereco(int *ponteiroX, int *ponteiroY);
int main()
{
   int x,y,*ponteiroX,*ponteiroY;
   printf("Atribua o valor de x e y");
   scanf("%d %d",&x,&y);
   ponteiroX = &x;
   ponteiroY = &y;
   ComparaEndereco(ponteiroX,ponteiroY);
}
void ComparaEndereco(int *ponteiroX, int *ponteiroY){
    if (ponteiroX>ponteiroY)
    {
        printf("o ponteiro x e maior que o y, %p>%p, o condeudo de x e %d",ponteiroX,ponteiroY,*ponteiroX);
    }else{
        printf("o ponteiro y e maior que o x, %p>%p, o conteudo de y e %d",ponteiroY,ponteiroX,*ponteiroY);
    }

}


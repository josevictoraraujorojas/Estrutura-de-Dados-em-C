#include<stdlib.h>
#include<stdio.h>
void ComparaEndereco(int *ponteiroX, int *ponteiroY);

int main()
{
    int  x,y,*ponteiroX,*ponteiroY;
    ponteiroX = &x;
    ponteiroY = &y;
    ComparaEndereco(ponteiroX,ponteiroY);

    
}
void ComparaEndereco(int *ponteiroX, int *ponteiroY){
    if (ponteiroX>ponteiroY)
    {
        printf("o ponteiro x e maior que o y, %p>%p",ponteiroX,ponteiroY);
    }else{
        printf("o ponteiro y e maior que o x, %p>%p",ponteiroY,ponteiroX);
    }

}



#include<stdlib.h>
#include<stdio.h>
void imprimiEnderecoDeMemoria(float *v,int tamanhoArray);

int main()
{
   float elementos[3][3];
   sizeofe(elementos)/sizeof(elementos[0]);
   imprimiEnderecoDeMemoria(elementos,3*3);
}
void imprimiEnderecoDeMemoria(float *v,int tamanhoArray){
for (int i = 0; i < tamanhoArray; i++)
{
  printf("\nEndereco de memoria do %d indice do array %p\n",i+1,v+i);
}

}
/*8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec¸o de cada posic¸ao desse array. */
#include<stdlib.h>
#include<stdio.h>

void imprimiEnderecoDeMemoria(float *v,int tamanhoArray);

int main()
{
   float elementos[10];
   imprimiEnderecoDeMemoria(elementos,10);
}
void imprimiEnderecoDeMemoria(float *v,int tamanhoArray){
for (int i = 0; i < tamanhoArray; i++)
{
    printf("\nEndereco de memoria do %d indice do array %p\n",i+1,v+i);
}

}
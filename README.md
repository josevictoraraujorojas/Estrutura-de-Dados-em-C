# Estruturas de dados Heterogêneas(struct) 

Diferentemente dos tipos homogêneos, essas estrturas permitem a manipulação de um conjunto de informações de tipos de dados primitivos diferentes, mas que possuem um relacionamento lógico entre si;

Uma struct é uma variável especial que contém diversas outras variáveis normalmente de tipos diferentes.

As variáveis internas contidas pela struct são denominadas membros da struct.

Podemos dizer que as structs da linguagem C são o equivalente ao que se denomina registros em outras linguagens de programação.

```C
struct <identificador>
{
 <listagem dos tipos e membros>;
}
 struct <identificador> <variavel>;
 ```

 # & em C

 `&` é um operador que nos permite acessar um endereço de memória de uma variável.
 

 # Ponteiro

 A utilização de ponteiros em linguagem C é uma das características que tornam a linguagem tão flexível e poderosa.

Ponteiros ou apontadores, são variáveis que armazenam o endereço de memória de outras variáveis.

Dizemos que um ponteiro “aponta” para uma varíável quando contém o endereço da mesma.

Os ponteiros podem apontar para qualquer tipo de variável. Portanto temos ponteiros para int, float, double, etc.

```C
tipo *nome_ponteiro;
```

valor é a variável que será apontada pelo ponteiro
```C
int valor = 27;
```

Declaração de variável ponteiro
```C
int *ptr;
```

Atribuindo o endereço de valor ao ponteiro
```C
ptr = &valor;
```

Acessando o conteudo da variavel que o ponteiro aponta
```C
*ptr;
```

# Alocação Estática de Memória
Na alocação estática o espaço de memória, que as
variáveis irão utilizar durante a execução do programa, é
definido no processo de compilação. Não sendo possível
alterar o tamanho desse espaço durante a execução do
programa. 

Este tipo de alocação é utilizado quando se sabe de
antemão a quantidade de memória que será utilizada pelo
programa. 

# Alocação Dinâmica de Memória
 Na alocação dinâmica o espaço de memória, que as
variáveis irão utilizar durante a execução do programa, é
definido enquanto o programa está em execução. Ou seja,
quando não se sabe ao certo quanto de memória será
necessário para o armazenamento das informações, podendo
ser determinadas, sob demanda, em tempo de execução
conforme a necessidade do programa. 

No padrão C ANSI existem quatro funções para alocação
dinâmica de memória:
```C
1. malloc();
2. calloc();
3. realloc();
4. free();
```
 Todas elas pertencem a biblioteca <stdlib.h>. Iremos
nos concentrar nas funções malloc() e free(), pois são as
mais utilizadas. 

## Sintaxe da função malloc():
```C
 void *malloc(size_t num_bytes);
```

 Esta função recebe como parâmetro "num_bytes" que é o
número de bytes de memória que se deseja alocar. O tipo
size_t é definido em stdlib.h como sendo um inteiro sem
sinal. O interessante é que esta função retorna um ponteiro
do tipo void podendo assim ser atribuído a qualquer tipo de
ponteiro. 


A função malloc() devolve um ponteiro do tipo void,
desta forma pode-se atribuí-lo a qualquer tipo de ponteiro.
Portanto, precisamos fazer uma conversão (cast) para o tipo
desejado e também alocar um espaço compatível com o tipo de
destino. A alocação para atender a essas necessidades deve
ser feita desta forma:
```C
 vetor = (int *) malloc (100*sizeof(int));
```

 Como a memória ocupada por um determinado tipo pode
variar de máquina para máquina, devemos utilizar o operador
sizeof, que retorna o tamanho do parâmetro informado. 
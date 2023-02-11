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

 `&` é um operador que nos permite acessar e modificar um endereço de memória de uma variável.
 

 # Ponteiro

 A utilização de ponteiros em linguagem C é uma das características que tornam a linguagem tão flexível e poderosa.

Ponteiros ou apontadores, são variáveis que armazenam o endereço de memória de outras variáveis.

Dizemos que um ponteiro “aponta” para uma varíável quando contém o endereço da mesma.

Os ponteiros podem apontar para qualquer tipo de variável. Portanto temos ponteiros para int, float, double, etc.

```C
tipo *nome_ponteiro;
```

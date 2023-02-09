#include <stdio.h>  	
#include <stdlib.h>
#include <string.h>

struct aluno
{
    char nome [50];
    int idade;
};
struct turma
{
    int sala;
    int id;
    struct  aluno alunos[5];
    
};

main()
{
    struct turma ed;
    struct aluno pessoa;
    printf ("Digite o nome a seguir: ");
    gets (pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);

    printf("Nome: %s e idade: %i", pessoa.nome, pessoa.idade);

    ed.alunos[0].idade = pessoa.idade;
    strcpy(ed.alunos[0].nome, pessoa.nome); //ed.alunos[0].nome = pessoa.nome;
    ed.id = 2023011;
    ed.sala = 0xF;
    
    printf("\nSala: %d\nID da turma: %d\nAluno: %s\nIdade: %d", ed.sala, ed.id, ed.alunos[0].nome, 
        ed.alunos[0].idade);

    
}
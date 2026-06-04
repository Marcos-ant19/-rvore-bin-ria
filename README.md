# Árvore Binária de Busca em C

## Descrição

Este projeto implementa uma Árvore Binária de Busca (ABB) utilizando a linguagem C.

A aplicação permite inserir valores inteiros na árvore, consultar a menor e a maior chave armazenada e percorrer a árvore utilizando diferentes tipos de percurso, tanto de forma recursiva quanto iterativa.

## Funcionalidades

* Inserção de nós na árvore binária de busca.
* Busca da menor chave armazenada.
* Busca da maior chave armazenada.
* Percurso em pré-ordem (recursivo e iterativo).
* Percurso em ordem (recursivo e iterativo).
* Percurso em pós-ordem (recursivo e iterativo).
* Menu interativo para execução das operações.

## Estrutura do Projeto

```text
.
├── main.c
├── arvore.c
├── arvore.h
└── README.md
```

## Compilação

Utilize o GCC para compilar o projeto:

```bash
gcc main.c arvore.c -o programa
```

## Execução

Após a compilação, execute:

```bash
./programa
```

No Windows:

```bash
programa.exe
```

## Conceitos Utilizados

* Estruturas (`struct`)
* Ponteiros
* Alocação dinâmica de memória
* Recursão
* Pilhas para percursos iterativos
* Árvores Binárias de Busca (ABB)

## Autor

Marcos Antônio do Nascimento

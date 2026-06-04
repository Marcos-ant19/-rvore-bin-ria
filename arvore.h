#ifndef ARVORE_H
#define ARVORE_H

typedef struct No{
    int chaves;
    struct No* esq;
    struct No* dir; 
}No;

typedef struct Arvore{
    No* raiz;
}Arvore;

Arvore* criar_arvore();

No* inserir(No* raiz, int valor);

int menor_chave(Arvore* a);
int maior_chave(Arvore* a);

void pre_ordem(No* raiz);
void em_ordem(No* raiz);
void pos_ordem(No* raiz);


void pre_ordem_iterativo(No* raiz);
void em_ordem_iterativo(No* raiz);
void pos_ordem_iterativo(No* raiz);

#endif
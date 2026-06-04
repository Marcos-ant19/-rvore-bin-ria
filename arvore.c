#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"


Arvore* criar_arvore(){
    Arvore* a = malloc(sizeof(Arvore));
    a->raiz = NULL;

    return a;
}

No* inserir(No* raiz, int valor){
    if(raiz == NULL){
        No* novo = malloc(sizeof(No));
        novo->chaves = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }

    if(valor < raiz->chaves){
        raiz->esq = inserir(raiz->esq, valor);
    }else if(valor > raiz->chaves){
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}

int menor_chave(Arvore* a){
    if(a->raiz == NULL){
        printf("Arvore vazia!\n");
        return -1;
    }

    No* atual = a->raiz;

    while(atual->esq != NULL){
        atual = atual->esq;
    }

    return atual->chaves;
}

int maior_chave(Arvore* a){
    if(a->raiz == NULL){
        printf("Arvore vazia!\n");
        return -1;
    }

    No* atual = a->raiz;

    while(atual->dir != NULL){
        atual = atual->dir;
    }

    return atual->chaves;
}

void pre_ordem(No* raiz){
    if(raiz != NULL){
        printf("%d ", raiz->chaves);
        pre_ordem(raiz->esq);
        pre_ordem(raiz->dir);
    }
}

void em_ordem(No* raiz){
    if(raiz != NULL){
        em_ordem(raiz->esq);
        printf("%d ", raiz->chaves);
        em_ordem(raiz->dir);
    }
}


void pos_ordem(No* raiz){
    if(raiz != NULL){
        pos_ordem(raiz->esq);
        pos_ordem(raiz->dir);
        printf("%d ", raiz->chaves);
    }
}

void pre_ordem_iterativo(No* raiz){
    if(raiz == NULL){
        printf("Arvore vazia!\n");
        return;
    }

    No* pilha[100];
    int topo = -1;

    pilha[++topo] = raiz;

    while(topo >= 0){
        No* atual = pilha[topo--];

        printf("%d ", atual->chaves);

        if(atual->dir != NULL){
            pilha[++topo] = atual->dir;
        }

        if(atual->esq != NULL){
            pilha[++topo] = atual->esq;
        }
    }
}

void em_ordem_iterativo(No* raiz){
    No* pilha[100];
    int topo = -1;
    No* atual = raiz;

    while(atual != NULL || topo >= 0){

        while(atual != NULL){
            pilha[++topo] = atual;
            atual = atual->esq;
        }

        atual = pilha[topo--];

        printf("%d ", atual->chaves);

        atual = atual->dir;
    }
}

void pos_ordem_iterativo(No* raiz){
    if(raiz == NULL){
        printf("Arvore vazia!\n");
        return;
    }

    No* pilha1[100];
    No* pilha2[100];

    int topo1 = -1;
    int topo2 = -1;

    pilha1[++topo1] = raiz;

    while(topo1 >= 0){
        No* atual = pilha1[topo1--];

        pilha2[++topo2] = atual;

        if(atual->esq != NULL){
            pilha1[++topo1] = atual->esq;
        }

        if(atual->dir != NULL){
            pilha1[++topo1] = atual->dir;
        }
    }

    while(topo2 >= 0){
        No* atual = pilha2[topo2--];
        printf("%d ", atual->chaves);
    }
}
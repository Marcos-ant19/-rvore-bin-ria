#include <stdio.h>
#include "arvore.h"

int main(){

    Arvore* a = criar_arvore();

    int opcao;
    int valor;

    do{
        printf("\n===== MENU =====\n");
        printf("1 - Inserir valor\n");
        printf("2 - Mostrar menor chave\n");
        printf("3 - Mostrar maior chave\n");
        printf("4 - Pre-ordem recursivo\n");
        printf("5 - Em-ordem recursivo\n");
        printf("6 - Pos-ordem recursivo\n");
        printf("7 - Pre-ordem iterativo\n");
        printf("8 - Em-ordem iterativo\n");
        printf("9 - Pos-ordem iterativo\n");
        printf("10 - Sair\n");
        printf("Digite uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:
            printf("Digite um valor na arvore: ");
            scanf("%d", &valor);
            a->raiz = inserir(a->raiz, valor);
            break;

            case 2:
            printf("%d ",menor_chave(a));
            break;

            case 3:
            printf("%d ",maior_chave(a));
            break;

            case 4:
            pre_ordem(a->raiz);
            break;

            case 5:
            em_ordem(a->raiz);
            break;

            case 6:
            pos_ordem(a->raiz);
            break;

            case 7:
            pre_ordem_iterativo(a->raiz);
            break;

            case 8:
            em_ordem_iterativo(a->raiz);
            break;

            case 9:
            pos_ordem_iterativo(a->raiz);
            break;

            case 10:
            printf("Saindo...\n");
            break;

            default:
            printf("Erro, tente novamente!\n");
        }
    }while(opcao != 10);

    return 0;
}

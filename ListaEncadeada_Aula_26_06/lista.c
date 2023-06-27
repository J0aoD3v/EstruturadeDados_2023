#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

//funcao de criacao: retorna uma lista vazia
Lista* lst_cria(void) {
    return NULL;
}

void lst_libera(Lista* lst) {
    Lista* aux;
    while (lst != NULL) {
        aux = lst; //faz p apontar para o proximo
        lst = lst->prox; //guarda referencia p/ prox. elemento
        free(aux); //libera a memoria apontada por p
    }
}

//insercao no inicio: retorna a lista atualizada
Lista* lst_insere(Lista* lst, int val) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    if (novo == NULL) {
        printf("Erro: falha ao alocar mem�ria\n");
        return lst;
    }
    novo->info = val;
    novo->prox = lst;
    return novo;
}

//funcao retira: retira elemento da lista
Lista* lst_retira(Lista* lst, int val) {
    Lista* ant = NULL; //ponteiro para elemento anterior
    Lista* atual = lst; //elemento para percorrer a lista
//procura elemento na lista, guardando anterior
    while (atual != NULL && atual->info != val) {
        ant = atual;
        atual = atual->prox;
    }
//verifica se achou elemento
    if (atual == NULL) {
        printf("Erro: valor n�o encontrado na lista\n");
        return lst; //nao achou: retorna lista original
    }
//retira elemento
    if (ant == NULL) {
            //retira elemento do inicio
        lst = atual->prox;
    } else { //retira elemento do meio da lista
        ant->prox = atual->prox;
    }

    free(atual);
    return lst;
}

//retorna 1 se vazia ou 0 se nao vazia
int lst_vazia(Lista* lst) {
    return lst == NULL;
}

//funcao busca: busca um elemento na lista
Lista* lst_busca(Lista* lst, int val) {
    Lista* p;
    for (p = lst; p != NULL; p = p->prox) {
        if (p->info == val) {
            return p;
        }
    }
    return NULL; //nao achou o elemento
}

//funcao imprime: imprime valores dos elementos
void lst_imprime(Lista* lst) {
    Lista* p;
    for (p = lst; p != NULL; p = p->prox) {
        printf("%d ", p->info);
    }
    printf("\n");
}

int lst_igual(Lista* lst1, Lista* lst2) {
    Lista* p1 = lst1; //ponteiro para percorrer 11
    Lista* p2 = lst2; //ponteiro para percorrer 12

    while (p1 != NULL && p2 != NULL) {
        if (p1->info != p2->info) {
            return 0;
        }
        p1 = p1->prox;
        p2 = p2->prox;
    }

    // Se ambas as listas chegarem ao final simultaneamente, elas s�o iguais
    if (p1 == NULL && p2 == NULL) {
        return 1;
    }

    // Caso contrario, as listas tem tamanhos diferentes e nao sao iguais
    return 0;
}

//funcao insere_ordenado: insere elemento em ordem
Lista* lst_insere_ordenado(Lista* lst, int val) {
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    if (novo == NULL) {
        printf("Erro: falha ao alocar mem�ria\n");
        return lst;
    }
    novo->info = val;
    novo->prox = NULL;

    if (lst == NULL || val < lst->info) {
        novo->prox = lst;
        return novo;
    }

    Lista* ant = lst;
    Lista* atual = lst->prox;

    while (atual != NULL && atual->info < val) {
        ant = atual;
        atual = atual->prox;
    }

    ant->prox = novo;
    novo->prox = atual;

    return lst;
}

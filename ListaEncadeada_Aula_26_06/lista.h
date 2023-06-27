#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

typedef struct lista Lista;

struct lista {
    int info;
    struct lista* prox;
};

Lista* lst_cria(void);
void lst_libera(Lista* lst);
Lista* lst_insere(Lista* lst, int val);
Lista* lst_retira(Lista* lst, int val);
int lst_vazia(Lista* lst);
Lista* lst_busca(Lista* lst, int val);
void lst_imprime(Lista* lst);
int lst_igual(Lista* lst1, Lista* lst2);
Lista* lst_insere_ordenado(Lista* lst, int val);


#endif // LISTA_H_INCLUDED

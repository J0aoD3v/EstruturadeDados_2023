#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(void) {
    Lista* lst = lst_cria(); // Cria uma lista vazia

    int opcao;
    int valor;

    do {
        printf("Escolha uma opcao:\n");
        printf("1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Buscar elemento\n");
        printf("4. Imprimir lista\n");
        printf("5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                lst = lst_insere(lst, valor);
                printf("Valor inserido na lista.\n");
                break;
            case 2:
                printf("Digite o valor a ser removido: ");
                scanf("%d", &valor);
                lst = lst_retira(lst, valor);
                printf("Valor removido da lista.\n");
                break;
            case 3:
                printf("Digite o valor a ser buscado: ");
                scanf("%d", &valor);
                Lista* busca = lst_busca(lst, valor);
                if (busca != NULL) {
                    printf("O valor %d foi encontrado na lista.\n", valor);
                } else {
                    printf("O valor %d nao foi encontrado na lista.\n", valor);
                }
                break;
            case 4:
                printf("Lista: ");
                lst_imprime(lst);
                break;
            case 5:
                printf("Encerrando programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 5);

    lst_libera(lst); // Libera a memoria alocada para a lista

    return 0;
}

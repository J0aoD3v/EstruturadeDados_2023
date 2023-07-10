#include "lista2.h"
#include <stddef.h>

int main() {
    Node* lista = NULL;

    // Inserindo elementos na lista
    insertNode(&lista, 10);
    insertNode(&lista, 20);
    insertNode(&lista, 30);
    insertNode(&lista, 40);

    // Imprimindo a lista
    printList(lista);

    // Removendo um elemento da lista
    removeNode(&lista, 20);

    // Imprimindo a lista novamente
    printList(lista);

    // Liberando a memória alocada pela lista
    freeList(lista);

    return 0;
}

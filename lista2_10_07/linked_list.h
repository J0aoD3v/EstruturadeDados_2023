#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Definindo a estrutura do nó da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Funções para a lista encadeada
Node* createNode(int data);
void insertNode(Node** head, int data);
void removeNode(Node** head, int data);
void printList(Node* head);
void freeList(Node* head);

#endif /* LINKED_LIST_H */

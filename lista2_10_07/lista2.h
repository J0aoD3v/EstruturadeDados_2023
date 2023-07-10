#ifndef LISTA2_H
#define LISTA2_H

// Definindo a estrutura do nó da lista
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Função para criar um novo nó
Node* createNode(int data);

// Função para inserir um nó no início da lista
void insertNode(Node** head, int data);

// Função para remover um nó da lista
void removeNode(Node** head, int data);

// Função para imprimir os elementos da lista
void printList(Node* head);

// Função para liberar a memória alocada pela lista
void freeList(Node* head);

#endif

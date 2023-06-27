Aula de Estrutura de Dados - 26/06/2023

# Programa de Lista Encadeada
Este é um programa de exemplo que implementa uma lista encadeada em C. O código-fonte está dividido em três arquivos: lista.c, lista.h e main.c.

## Arquivo lista.c
O arquivo lista.c contém a implementação das funções que operam na lista encadeada. Ele inclui as seguintes funções:

- lst_cria(): Cria uma lista vazia.
- lst_libera(): Libera a memória alocada para a lista.
- lst_insere(): Insere um elemento no início da lista.
- lst_retira(): Remove um elemento da lista.
- lst_vazia(): Verifica se a lista está vazia.
- lst_busca(): Busca um elemento na lista.
- lst_imprime(): Imprime os valores da lista.
- lst_igual(): Verifica se duas listas são iguais.
- lst_insere_ordenado(): Insere um elemento em ordem na lista.
## Arquivo lista.h
O arquivo lista.h contém a definição da estrutura Lista e a declaração das funções que operam na lista. Ele inclui as seguintes declarações:

- struct lista: Estrutura que representa um elemento da lista.
- Lista* lst_cria(): Cria uma lista vazia.
- void lst_libera(Lista* lst): Libera a memória alocada para a lista.
- Lista* lst_insere(Lista* lst, int val): Insere um elemento no início da lista.
- Lista* lst_retira(Lista* lst, int val): Remove um elemento da lista.
- int lst_vazia(Lista* lst): Verifica se a lista está vazia.
- Lista* lst_busca(Lista* lst, int val): Busca um elemento na lista.
- void lst_imprime(Lista* lst): Imprime os valores da lista.
int lst_igual(Lista* lst1, Lista* lst2): Verifica se duas listas são iguais.
- Lista* lst_insere_ordenado(Lista* lst, int val): Insere um elemento em ordem na lista.
## Arquivo main.c
O arquivo main.c contém a função main(), que é o ponto de entrada do programa. Neste arquivo, o usuário pode interagir com a lista por meio de comandos de entrada. Alguns exemplos de comandos incluem:

- lst_insere(lst, val): Insere um valor na lista.
- lst_retira(lst, val): Remove um valor da lista.
- lst_busca(lst, val): Busca um valor na lista.
- lst_imprime(lst): Imprime os valores da lista.
> O programa permite ao usuário inserir comandos e exibe os resultados correspondentes na saída. Ao final, a memória alocada para a lista é liberada.

## Executando o programa
Para executar o programa, siga as instruções abaixo:

1. Compile os arquivos lista.c, lista.h e main.c usando um compilador de C (como o GCC).
2. Execute o arquivo resultante da compilação (geralmente um arquivo com extensão .exe no Windows).
O programa apresentará um menu de opções para o usuário interagir com a lista encadeada.

## Contribuição
Se você quiser contribuir para este projeto, sinta-se à vontade para fazer um fork e enviar uma solicitação pull com suas melhorias.
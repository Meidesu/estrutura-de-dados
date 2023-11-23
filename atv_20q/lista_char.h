#include <stdio.h>
#include <stdlib.h>

// Estrutura de Lista
typedef struct ListaStruct
{
  char item;
  struct ListaStruct *prox;
} Lista;

// Construtor de nó
Lista *no(char item, Lista *prox)
{
  Lista *nova_lista = (Lista *)malloc(sizeof(Lista));
  nova_lista->item = item;
  nova_lista->prox = prox;
  return nova_lista;
}

// Função para exibir inversa.
void exibe_inv(Lista *lista)
{
  if (lista == NULL)
    return;
  exibe_inv(lista->prox);
  printf("%d - ", lista->item);
}

// Função para exibir.
void exibe(Lista *lista)
{
  if (lista == NULL)
    return;
  printf("%c - ", lista->item);
  exibe(lista->prox);
}

int len(Lista *lista)
{
  if (lista == NULL)
    return 0;
  return 1 + len(lista->prox);
}
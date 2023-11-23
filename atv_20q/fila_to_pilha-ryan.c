#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Fila
{
  int tamanho_max;
  int inicio;
  int final;
  int *elementos;
} Fila;

Fila *criarFila(int tamanho_max)
{
  Fila *filaCriada = (Fila *)malloc(sizeof(Fila));
  filaCriada->inicio = -1;
  filaCriada->final = -1;
  filaCriada->elementos = (int *)malloc(sizeof(int) * tamanho_max);
  return filaCriada;
}

bool filaVazia(Fila *fila)
{
  return fila->inicio == -1;
}

bool filaCheia(Fila *fila)
{
  return fila->final == fila->tamanho_max - 1;
}

void adcionarElemento(int elemento, Fila *fila)
{
}

int main()
{
}
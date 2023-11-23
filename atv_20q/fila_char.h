#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef char Itemf;

typedef struct Fila
{
  int max;
  int total;
  int inicio;
  int final;
  Itemf *item;
} *Fila;

Fila fila(int max)
{
  Fila f = (Fila)malloc(sizeof(Fila));
  f->max = max;
  f->total = 0;
  f->inicio = 0;
  f->final = 0;
  f->item = (char *)malloc(max * sizeof(Itemf));
  return f;
}

bool vaziaf(Fila fila)
{
  return fila->total == 0;
}

bool cheiaf(Fila fila)
{
  return fila->total == fila->max;
}

void avanca(Fila fila)
{
  fila->final = (fila->final + 1) % fila->max;
}

void enfileira(Itemf elemento, Fila fila)
{
  if (!cheiaf(fila))
  {
    fila->item[fila->final] = elemento;
    avanca(fila);
    fila->total++;
  }
}

Itemf desenfileira(Fila fila)
{
  Itemf elemento = fila->item[fila->inicio];
  fila->inicio = (fila->inicio + 1) % fila->max;
  fila->total--;
  return elemento;
}

void destroif(Fila *fila)
{
  free((*fila)->item);
  free(*fila);
  *fila = NULL;
}
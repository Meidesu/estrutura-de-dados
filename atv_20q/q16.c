#include <stdio.h>
#include "lista.h"

int soma(Lista *l)
{
  if (l == NULL)
    return 0;

  return l->item + soma(l->prox);
}

int main()
{
  Lista *l = no(10, no(20, no(30, no(40, no(50, NULL)))));

  printf("%d\n", soma(l));
  return 0;
}
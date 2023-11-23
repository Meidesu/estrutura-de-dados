#include <stdio.h>
#include "lista_char.h"

void substitui(char x, char y, Lista *L)
{
  if (L == NULL)
  {
    return;
  }

  if (L->item == x)
  {
    L->item = y;
  }

  substitui(x, y, L->prox);
}

int main()
{
  Lista *L = no('r', no('a', no('m', no('o', NULL))));
  substitui('r', 'p', L);
  substitui('m', 'n', L);
  exibe(L);
  return 0;
}

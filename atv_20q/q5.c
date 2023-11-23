#include <stdio.h>
#include "pilha_float.h"

int main()
{
  Pilha p = pilha(100);
  empilha(8, p);
  while (topo(p) > 1)
    empilha(topo(p) / 2, p);

  while (!vaziap(p))
    printf("%f\n", desempilha(p));

  return 0;
}
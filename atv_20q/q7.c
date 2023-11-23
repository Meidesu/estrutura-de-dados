#include <stdio.h>
#include <stdlib.h>
#include "pilha_int.h"

int main()
{
  int n;
  printf("Digite a quantidade de números: ");
  scanf("%d", &n);

  Pilha A = pilha(n);
  Pilha B = pilha(n);

  while (!cheiap(A))
  {
    int x;
    printf("Digite um numero: ");
    scanf("%d", &x);

    if (topo(A) != -1)
    {
      while (x > topo(A))
      {
        empilha(desempilha(A), B);
      }

      empilha(x, A);

      while (!vaziap(B))
      {
        empilha(desempilha(B), A);
      }
    }
    else
    {
      empilha(x, A);
    }
  }

  printf("Pilha ordenada: ");
  while (!vaziap(A))
  {
    printf("%d ", desempilha(A));
  }

  return 0;
}

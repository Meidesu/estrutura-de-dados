#include <stdio.h>
#include "pilha_int.h"

int main()
{
  Pilha p = pilha(3);
  empilha(1, p);
  empilha(2, p);
  printf(">>%d<<\n", desempilha(p));
  printf(">>%d<<\n", desempilha(p));
  printf(">>%d<<\n", desempilha(p));

  return 0;
}

/*
- p = [1]
- p = [1, 2]
>> 2
>> 1
>> Pilha vazia
*/
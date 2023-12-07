#include <stdio.h>
#include "fila_char.h"

int main()
{
  Fila f = fila(5);
  for (int i = 0; i < 5; i++)
    enfileira('A' + i, f);

  while (!vaziaf(f))
    printf("%c\n", desenfileira(f));

  destroif(&f);
  return 0;
}

/*
- f = [A]
- f = [A, B]
- f = [A, B, C]
- f = [A, B, C, D]
- f = [A, B, C, D, E]
>> A
>> B
>> C
>> D
>> E
*/
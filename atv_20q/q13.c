#include <stdio.h>
#include "fila_int.h"

int main(){
  Fila f = fila(5);
  enfileira(1, f);
  enfileira(2, f);
  enfileira(3, f);
  enfileira(desenfileira(f), f);
  enfileira(desenfileira(f), f);
  printf("%d\n", desenfileira(f));

}

/*
- f = [1]
- f = [1, 2]
- f = [1, 2, 3]
- f = [2, 3, 1]
- f = [3, 1, 2]
>> 3 
*/
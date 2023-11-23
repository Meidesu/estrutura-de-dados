#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_char.h"

#define MAX 100

void inverterLetras(char *frase)
{
  Pilha p = pilha(MAX);

  int len = strlen(frase);
  char fraseInversa[MAX] = "";

  for (int i = 0; i < len + 1; i++)
  {

    if (frase[i] != ' ' && frase[i] != '\0')
    {
      empilha(frase[i], p);
    }
    else
    {
      while (!vaziap(p))
      {
        char letra = desempilha(p);
        strncat(fraseInversa, &letra, 1);
      }
      strncat(fraseInversa, " ", 1);
    }
  }

  printf("Frase inversa: %s\n", fraseInversa);
}

int main()
{
  char frase[MAX];

  printf("Digite uma frase: ");
  fgets(frase, sizeof(frase), stdin);

  // Remove o \n do final da frase
  frase[strcspn(frase, "\n")] = '\0';

  inverterLetras(frase);

  return 0;
}

/*
em linguagens normais a gente nao consegue alterar um elemento especifico de uma cadeia de caracteres (string)

*/
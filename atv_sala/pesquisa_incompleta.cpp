#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
int pesquisa_linear(int x, int v[], int n);
int pesquisa_binaria(int x, int v[], int n);

int main()
{
   // A. Leia os valores atrav�s do teclado
   // B. Armazene os valores no vetor de dados
   // C. leia o valor que deseja procurar
   // D. Aplique a pesquisa linear
   // E. Apresente o resultado
   // F. Aplique a pesquisa bin�ria
   // G. Apresente o resultado

   int v[5];
   int len = sizeof(v) / sizeof(v[0]);
   int procurado;

   printf("%d\n", len);

   for (int i = 0; i < len; i++)
   {
      printf("%dº item: ", i+1);
      scanf("%d", &v[i]);
   }

   printf("Valor procurado: ");
   scanf("%d", &procurado);

   printf("Pesquisa linear: ");

   if (pesquisa_linear(procurado, v, len))
   {
      printf("Existe\n");
   }
   else
   {
      printf("não existe\n");
   }

   printf("Pesquisa binaria: ");

   if (pesquisa_binaria(procurado, v, len))
   {
      printf("Existe\n");
   }
   else
   {
      printf("não existe\n");
   }
}

int pesquisa_linear(int x, int v[], int n)
{
   for (int i = 0; i < n; i++)
   {
      if (v[i] == x)
         return 1;
   }

   return 0;
}

int pesquisa_binaria(int x, int v[], int n)
{
   int p = 0;
   int u = n - 1;

   while (p <= u)
   {
      int m = (p + u) / 2;

      if (x == v[m])
         return 1;

      if (x < v[m])
         u = m - 1;
      else
         p = m + 1;
   }

   return 0;
}
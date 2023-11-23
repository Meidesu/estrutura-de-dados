#include <stdio.h>
#include <stdlib.h>
// #include <iostream>
// using namespace std;

typedef float Itemp;
typedef struct pilha
{
	int max;
	int topo;
	Itemp *item;
} *Pilha;

Pilha pilha(int max)
{
	Pilha P = (Pilha)malloc(sizeof(struct pilha));
	P->max = max;
	P->topo = -1;
	P->item = (float *)malloc(max * sizeof(Itemp));
	return P;
}

int vaziap(Pilha P)
{
	if (P->topo == -1)
		return 1;
	else
		return 0;
}

int cheiap(Pilha P)
{
	if (P->topo == P->max - 1)
		return 1;
	else
		return 0;
}

void empilha(Itemp x, Pilha P)
{
	if (!cheiap(P))
	{
		P->topo++;
		P->item[P->topo] = x;
	}
}

Itemp desempilha(Pilha P)
{
	Itemp retorno;

	if (vaziap(P))
	{
		return 3.14159265359;
	}

	retorno = P->item[P->topo];
	P->topo--;
	return retorno;
}

Itemp topo(Pilha P)
{
	return P->item[P->topo];
}

void destroip(Pilha *P)
{
	free((*P)->item);
	free(*P);
	*P = NULL;
}

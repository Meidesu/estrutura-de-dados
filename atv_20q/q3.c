#include <stdio.h>
#include "fila.h"
#include <stdlib.h>

typedef struct pilha
{
    Queue *a;
    Queue *b;

} Pilha;

Pilha *criarPilha(int tamanho_max)
{
    Pilha *novaPilha = (Pilha *)malloc(sizeof(Pilha));
    novaPilha->a = create_queue(tamanho_max);
    novaPilha->b = create_queue(tamanho_max);
    return novaPilha;
}

void insertIntoStack(int value, Pilha *pilha)
{
    Queue *escolhida = is_empty(pilha->a) ? pilha->a : pilha->b;
    Queue *outra = escolhida == pilha->a ? pilha->b : pilha->a;

    // Coloco o valor antes e depois vou colocando o resto guardado
    enqueue(escolhida, value);
    while (!is_empty(outra))
    {
        enqueue(escolhida, dequeue(outra));
    }
}

int pop(Pilha *p)
{
    if (is_empty(p->a) && is_empty(p->b))
        exit(1);
    Queue *escolhida = !is_empty(p->a) ? p->a : p->b;
    return dequeue(escolhida);
}

void printStack(Pilha *stack)
{
    Pilha *outraStack = stack;
    printf("Printando Stack \n");

    int valor_retirado;
    do
    {
        valor_retirado = pop(outraStack);
        printf("%d \n", valor_retirado);

    } while (valor_retirado != -1);
}

int main()
{
    Pilha *p = criarPilha(10);
    insertIntoStack(10, p);
    insertIntoStack(11, p);
    insertIntoStack(12, p);
    pop(p);
    insertIntoStack(13, p);

    printStack(p);

    return 0;
}
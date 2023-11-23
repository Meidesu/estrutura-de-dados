#include <stdio.h>
#include <iostream>
using namespace std;


typedef struct no{
    int item;
    struct no *prox;
}No;

No *inicio = NULL;

int main(){

    No *n1=new No();
    n1->item = 10;
    n1->prox = NULL;
    
    No *n2=new No();
    n2->item = 3;
    n2->prox = NULL;
    
    No *n3=new No();
    n3->item = 4;
    n3->prox = NULL;
    

    inicio = n2;
    n2->prox = n3;
    n3->prox = n1;
    n1->prox = NULL;
    
    No *atual = inicio;
    
    while ( atual != NULL ){
        std::cout << atual->item << std::endl;
        atual = atual->prox;
    }
    
}//3, 4, 10



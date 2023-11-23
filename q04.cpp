#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct pessoa {
    string cpf;
    string nome;
    pessoa *prox;
} Pessoa;

Pessoa *inicio = NULL;

int main() {
    Pessoa *p1 = new Pessoa();
    p1->nome = "Fabio";
    p1->cpf = "1111";
    p1->prox = NULL;
    
    Pessoa *p2 = new Pessoa();
    p2->nome = "Katia";
    p2->cpf = "2222";
    p2->prox = NULL;
    
    Pessoa *p3 = new Pessoa();
    p3->nome = "Jonatas";
    p3->cpf = "4444";
    p3->prox = NULL;
    
    inicio = p3;
    p3->prox = p1;
    p1->prox = p2;
    p2->prox = NULL;
    
    Pessoa *atual = inicio;
    
    while (atual != NULL){
        std::cout << atual->nome << std::endl;
        std::cout << atual->cpf << std::endl;
        std::cout <<  std::endl;
        
        atual = atual->prox;
    }
}



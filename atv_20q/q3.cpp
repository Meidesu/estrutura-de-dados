#include <iostream>

#define ELEMENTO_VAZIO -10123

using namespace std;

class Fila
// Mano, olá, sou eu falando do passado
// Seguinte achei esse negócio aqui que pode melhorar essa implementação de fila:
// vetor circular: acessar o próximo índice => i = (iAtual + 1) % tamanhoVetor
// Isso faz com que se eu digo que estou no ultimo item e tento acessar o próximo, volto pro primeiro
// Exemplo: [1, 2, 3], estou no índice 2, o útimo item, o próximo indice será 3 % 3, ou seja, 0
{
private:
  // Talvez seja melhor que tenha variáveis pro inicio e final + vetor circular ( vi no livro )
  int tamanho_max;
  int topo = -1;
  int *elementos;

public:
  Fila(int max)
  {
    tamanho_max = max;
    elementos = new int[max];
  }

  bool is_empty()
  {
    return topo == -1;
  }

  bool is_full()
  {
    return topo == tamanho_max - 1;
  }

  bool entrar(int item) // Entra na fila
  {

    if (is_full())
    {
      return false;
    }

    topo++;
    elementos[topo] = item;
    return true;
  }

  int sair() // Sai da fila
  {
    if (is_empty())
    {
      return ELEMENTO_VAZIO;
    }

    int retorno = elementos[0];

    for (int i = 0; i < topo; i++)
    {
      elementos[i] = elementos[i + 1];
    }

    topo--;
    return retorno;
  }

  ~Fila()
  {
    delete[] elementos;
  }
};

class Pilha
{
private:
  Fila *entrada;
  Fila *aux;

public:
  Pilha(int tamanho)
  {
    entrada = new Fila(tamanho);
    aux = new Fila(tamanho);
  };

  void adcionarElemento(int elemento)
  {
    entrada->entrar(elemento);
  }
};

int main()
{
}
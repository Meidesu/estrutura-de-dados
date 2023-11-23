#include <string.h>
#include <iostream>

using namespace std;

class No
{
public:
  int mat;
  string nome;
  No *prox;
  No *ant;

  No(int m, string n)
  {
    mat = m;
    nome = n;
    prox = NULL;
    ant = NULL;
  }
};

No *inicio = NULL;
No *fim = NULL;

void inserir_final(No *novo)
{

  if (inicio == NULL)
  {
    inicio = novo;
    fim = novo;
  }
  else
  {
    fim->prox = novo;
    novo->ant = fim;
    fim = novo;
  }
}

void inserir_inicio(No *novo)
{
  if (inicio == NULL)
  {
    inicio = novo;
    fim = novo;
  }
  else
  {
    inicio->ant = novo;
    novo->prox = inicio;
    inicio = novo;
  }
}

void mostrar_itens()
{
  No *atual = inicio;

  while (atual != NULL)
  {
    cout << "Nome: " << atual->nome;
    cout << " Matricula: " << atual->mat << endl;

    atual = atual->prox;
  }
}

void mostrar_inverso()
{
  No *atual = fim;

  while (atual != NULL)
  {
    cout << "Nome: " << atual->nome;
    cout << " Matricula: " << atual->mat << endl;

    atual = atual->ant;
  }
}

void mostrar_menu()
{
  cout << endl; 
  cout << "1 - Inserir final" << endl;
  cout << "2 - Inserir inicio" << endl;
  cout << "3 - Mostrar" << endl;
  cout << "4 - Mostrar inverso" << endl;
  cout << "0 - Sair" << endl;
}

int main()
{
  int opcao;

  mostrar_menu();
  cout << ">> ";
  cin >> opcao;

  while (opcao != 0)
  {

    string nome;
    int mat;
    No *novoAluno;

    switch (opcao)
    {
    case 1:

      cout << "Nome: ";
      cin >> nome;

      cout << "Matricula: ";
      cin >> mat;

      novoAluno = new No(mat, nome);
      inserir_final(novoAluno);

      break;

    case 2:
      cout << "Nome: ";
      cin >> nome;

      cout << "Matricula: ";
      cin >> mat;

      novoAluno = new No(mat, nome);
      inserir_inicio(novoAluno);

      break;

    case 3:
      mostrar_itens();

      break;

    case 4:
      mostrar_inverso();

      break;

    default:
      cout << "Escolha um comando valido!" << endl;
      break;
    }

    mostrar_menu();
    cout << ">> ";
    cin >> opcao;
  };
}
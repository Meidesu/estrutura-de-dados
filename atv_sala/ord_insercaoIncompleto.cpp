#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

void mostrar_vector(int v[], int tam){
  for ( int i = 0; i<tam; i++ ){
    cout << v[i] << " ";
  }
  cout << endl;
}

void insere ( int x, int v[], int n ){
  cout << "x: " << x << " n: " << n << endl;

  while ( n>0 && x<v[n-1]){
    cout << "Antes v[n]: " << v[n] << " v[n-1]: " << v[n-1] << endl;
    v[n] = v[n-1];
    n--;
    mostrar_vector(v, 5);
  }
  v[n] = x;
  mostrar_vector(v, 5);
}

int myarray[] = {10, 5, 6, 1, 3};

// # Defina o algoritmo de ordena��o por inser��o
//  #mostre o vetor ordenado


void ord_insercao(int v[], int tam)
{
  for ( int i = 0; i<tam; i++ ){
    insere(v[i], v, i);
  }
}

// #chame o algoritmo ord_insercao ordenando o vetor myarray
main()
{ 

  cout << "Vetor original: ";
  mostrar_vector(myarray, 5);
  cout << endl;

  ord_insercao(myarray, 5);

  cout << "Vetor ordenado: " << endl;
  mostrar_vector(myarray, 5);
  cout << endl;
}

#include <stdio.h>
#include <stdlib.h>

#define LEN 4

#define troca(a, b) \
	{                 \
		int x = a;      \
		a = b;          \
		b = x;          \
	}

void bolha(int n, int *v)
{
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (v[j] > v[j + 1])
			{
				printf("Trocando %d com %d\n", v[j], v[j + 1]);
				troca(v[j], v[j + 1]);
			}
		}
	}
}

// void PesquisaBinaria(int n, int *v, int procurado)
// {
// }

main()
{
	int v[LEN];
	for (int i = 0; i < LEN; i = i + 1)
	{
		printf("Digite o valor %d :", i);
		scanf("%d", &v[i]);
	}

	printf("Vetor original: ");
	for (int i = 0; i < LEN; i = i + 1)
	{
		printf("%d ", v[i]);
	}

	printf("\n");

	bolha(LEN, v);

	printf("Vetor ordenado: ");
	for (int i = 0; i < LEN; i = i + 1)
	{
		printf("%d ", v[i]);
	}

	printf("\n");



	// #ordene o vetor V usando o m�todo da bolha
	// #mostre o vetor ordenado
	// #pesquise no vetor usando o metodo de pesquisa binaria
}

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

int pesquisaBinaria(int n, int *v, int x)
{
	int p = 0;
	int u = n - 1;

	while (p <= u)
	{
		// Calcula o meio
		int m = (p + u) / 2;

		// se for igual ao meio ja retorna logo como true
		if (x == v[m])
		{
			return 1;
		}

		// Se não, define o novo fim caso o procurado seja menor q o meio, ou o contrário.
		if (x < v[m])
			u = m - 1;
		else
			p = m + 1;
	}

	return 0;
}

main()
{
	int v[LEN];
	int procurado;

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

	procurado = pesquisaBinaria(LEN, v, 3);

	if (procurado)
		printf("Existe no vetor");
	else
		printf("Nao existe");

	// #ordene o vetor V usando o m�todo da bolha
	// #mostre o vetor ordenado
	// #pesquise no vetor usando o metodo de pesquisa binaria
}

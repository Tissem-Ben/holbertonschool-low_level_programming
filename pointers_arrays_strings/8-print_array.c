#include "main.h"

/**
 * print_array - Imprime n éléments d'un tableau d'entiers
 * @a: Le tableau d'entiers
 * @n: Le nombre d'éléments à imprimer
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

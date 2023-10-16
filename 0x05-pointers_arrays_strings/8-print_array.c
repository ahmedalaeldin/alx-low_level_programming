#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: elements paramter input
 * @a: string parameter input
 *
 * Retun: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			print("%d", a[i]);
	}
	print("\n");
}

#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integers.
 * @a: A pointer to an array.
 * @n: A number of elements in an array to be printed.
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index < n - 1)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}

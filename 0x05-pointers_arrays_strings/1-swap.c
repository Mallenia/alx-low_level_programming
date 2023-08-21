#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers.
 * @a: An integer with pointer *a
 * @b: An integer with a pointer *b
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

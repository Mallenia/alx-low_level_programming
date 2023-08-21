#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: A character with a pointer *s.
 * Return: The length of a string.
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}


#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: integer to use.
 *
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	int *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}

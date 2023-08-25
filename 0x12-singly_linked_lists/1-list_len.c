#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to list_t
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}

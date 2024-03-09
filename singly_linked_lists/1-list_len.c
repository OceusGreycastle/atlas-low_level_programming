#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns element count from a list
 * @h: name of sizt_t list
 *
 * Return: Number of Nodes
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

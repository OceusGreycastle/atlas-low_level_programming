#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements counted in a list
 * @h: name of a size_t list
 *
 * Return: Number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: Name of size_t list
 *
 * Return: Number of Nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

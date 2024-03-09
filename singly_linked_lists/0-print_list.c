#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the elements in the list
 * @h: name of size_t list
 *
 * Return: Number Of Nodes
*/

size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
	{

		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
			h = h->next;
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
			count++;
		}

	}

	return (count);
}

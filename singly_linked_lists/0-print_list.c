#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
*/

size_t print_list(const list_t *h)
{



	size_t count = 1;

	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);

}

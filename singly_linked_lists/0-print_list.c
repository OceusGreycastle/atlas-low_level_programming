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



	size_t count = 0;

	while (h != NULL)
	{
		
		if (h->str == NULL)
		{
			printf("[%d] (nil)", h->len);
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

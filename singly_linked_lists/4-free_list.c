#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
*/

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head);
	}
}

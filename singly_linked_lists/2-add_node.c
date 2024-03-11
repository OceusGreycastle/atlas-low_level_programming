#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *
 *
 *
*/

list_t *add_node(list_t **head, const char *str)
{

	list_t *nugget;

	if (head == NULL)
	{
		return (NULL);
	}

	nugget = NULL;

	nugget = malloc(sizeof(list_t));

	if (nugget == NULL)
	{
		return (NULL);
	}

	nugget = strdup(str);

	nugget->next = *head;

	*head = nugget;

	return (list_t);

}

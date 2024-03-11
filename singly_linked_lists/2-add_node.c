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
	if (head == NULL)
	{
		return (NULL);
	}

	list_t *nugget;
	
	*nugget = NULL;

	nugget = malloc(sizeof(list_t));

	if (nugget == NULL)
	{
		return (NULL);
	}

	strdup(str) = *nugget;

	nugget->next = *head;

	*head = nugget;

	return (list_t);



}

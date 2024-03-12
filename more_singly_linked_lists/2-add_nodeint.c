#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include "strlen.c"

/**
 *
 *
 *
*/

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *nugget;

	if (head == NULL)
	{
		return (NULL);
	}

	nugget = NULL;

	nugget = malloc(sizeof(listint_t));

	if (nugget == NULL)
	{
		return (NULL);
	}

	nugget->n = strdup(n);

	nugget->next = *head;

	*head = nugget;

	return (nugget);
}

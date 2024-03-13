#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node to the head of a list
 * @head: head of list
 * @n: node to be inserted
 * 
 * Return: number of nodes
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *nugget;

	if (head == NULL)
	{
		return (NULL);
	}

	nugget = NULL;

	nugget = malloc(sizeof(dlistint_t));

	if (nugget == NULL)
	{
		return (NULL);
	}

	nugget->n = n;

	nugget->next = *head;

	*head = nugget;

	return (nugget);
}

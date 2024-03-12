#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include "strlen.c"

/**
 * add_nodeint - adds an int node to the list head
 * @head: Head of the list
 * @n: int variable to be inserted
 *
 * Return: number of nodes
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

	nugget->n = n;

	nugget->next = *head;

	*head = nugget;

	return (nugget);
}

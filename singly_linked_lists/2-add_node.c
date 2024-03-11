#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
#include "strlen.c"

/**
 * add_node - adds a node to the head
 * @head: Pointer to the head of the list
 * @str: String to be inserted
 *
 * Return: Always
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

	nugget->str = strdup(str);

	nugget->len = _strlen(str);

	nugget->next = *head;

	*head = nugget;

	return (nugget);

}

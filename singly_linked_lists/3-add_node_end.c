#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list.
 * @head: pointer to the head of list
 * @str: string to be copied
 * 
 * Return: Always
*/

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *nugget;
    list_t *temp_nugget;

    nugget = NULL;

    nugget = malloc(sizeof(list_t));

    if (*head == NULL)
    {
        return (NULL);
    }
    if (nugget == NULL)
    {
        return (NULL);
    }
    


}

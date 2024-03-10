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

    list_t *nugget = NULL;

    nugget = malloc(sizeof(list_t));

    if (nugget == NULL)
    {
        return (NULL);
    }
    



}

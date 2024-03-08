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
    
    list_t *scanptr;
    scanptr = *h;

    int count = 1;

    while (scanptr != NULL)
    {
        printf(scanptr);
        scanptr = scanptr->next;
        count++;
    }
    return (count);

}

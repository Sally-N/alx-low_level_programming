#include <stdio.h>
#include "lists.h"

/**
 * list-len - returns the number of elements in a linked list
 * @h: pointer to the list_t lis
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while(h)
	{
		n++;
		h = h->next;
	}
	return(n);
}

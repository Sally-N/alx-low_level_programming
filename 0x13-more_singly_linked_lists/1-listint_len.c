#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: head of a list. 
 *
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *pointer = h;
	size_t num = 0;

	while(pointer != NULL)
	{
		pointer = pointer->next;
		num += 1;
	}
	return(num);
}

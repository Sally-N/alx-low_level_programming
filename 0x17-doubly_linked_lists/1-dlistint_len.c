#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
<<<<<<< HEAD
	return (i);}
=======
	return (i);
}
>>>>>>> 50fd6c7cdd76702e487dbd25a7550cdc7776b6b3

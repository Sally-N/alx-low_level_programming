#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list.
 * @h: head of a list.
 * @n: n element.
 *
 * Return: address of the newly added element. NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if(new != NULL)
	{
		new->n = n;
		new->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new->next = *head;
	*head = new;
	return (new);
}

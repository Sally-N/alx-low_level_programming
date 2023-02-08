#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 *
 * @size: size of the array
 * Return: A pointer to the new created hash table on success, NULL on failure *
 */ 

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_t = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_t->array == NULL)
		return (NULL);

	/*create hash table slots*/
	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}

#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function to create a hash table
 * @size: size f the array
 * Return: pointer to the hashable on success, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hasht = malloc(sizeof(hash_table_t));

	if (ht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);

	if (hasht->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hasht->array[i] = NULL;

	return (hasht);
}

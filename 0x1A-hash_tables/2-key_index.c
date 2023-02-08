#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - function to calculate the index of a key.
 *
 * @key: key of the node.
 * @size: size of the array.
 * Return: index at which the key/value pair should be stored in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index, hasht;

	hasht = hash_djb2(key);

	index = hasht % size;
	
	return (index);
}

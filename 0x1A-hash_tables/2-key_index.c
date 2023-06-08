#include "hash_tables.h"

/**
 * key_index - generates index for a hash node
 * @key: node key
 * @size: size of hash table array
 * )
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value, index;

	value = hash_djb2(key);
	index = value % size;
	return (index);
}
